subset026 - Baseline 3
======================

These files make up the core of this repository and constituted the original cause for the creation of the [conversion tool](https://github.com/morido/subset026reader).

---

This is an additional README covering the `statistics/` subfolder of each chapter. Users who only want to use the ReqIFs may skip this. Please see the instructions in the generic [README](../README.md), instead.

# Notes regarding statistics

<img align="right" alt="Chapter 2 example rendering" src="statistics_example_chapter2.png?raw=true">Each chapter contains a subfolder named `statistics/`. This folder contains an abstract tree of the respective chapter (respectively a combined tree in `all_chapters/statistics/`) which may be used to get a quick overview of the hierarchical structure of the embedded artifacts or as an input to more sophisticated statistical analyses (hence the name).
An example visualization of such a tree can be seen on the right (chapter2).

Such trees are a byproduct of the Word to ReqIF conversion. All artifacts which later become serialized to the ReqIF XML-structure are held in a similar in-memory-tree during the different phases of the conversion process.

---

Each folder contains the following files:

* **nodes.csv** - a CSV containing all nodes (i.e. traceable artifacts / requirements) of the respective chapter. Columns map as follows:
 1. unique id (based on the tracestring); value is a String
 2. first 25 characters of the contents of the artifact; value is a String
 3. hierarchical level of the tracestring associated with the artifact (0 means root, +1 for each level); value is an Integer
 4. Implementation flag of the artifact (same as in ReqIF); value is a Boolean
* **edges.csv** - a CSV containing all links between nodes. Columns map as follows:
 1. source (unique id); value is a String
 2. target (unique id); value is a String
 3. weight of the link (1 means it is a crossreference link, 2 stands for a parent/child link); value is a Float
* **chapter*N*.gephi** - a zipped XML that can be opened with [Gephi](http://www.gephi.org). It was created using the CSVs from above.
* **chapter*N*.pdf** - an example rendering produced by Gephi (a colorful tree as shown in the screenshot on this page; see below for how it was created)

*Note: The CSVs have Unix-style line endings (`\n`), use commas (`,`) as separators and all values are enclosed in hyphens (`"`)*


## Interpretation of the PDF-renderings

* The hierachical rendering is a result of [graphviz](http://www.graphviz.org/)'s [dot](http://en.wikipedia.org/wiki/Layered_graph_drawing) algorithm
* Colors indicate different *coherent* groups (based on their [Modularity](http://en.wikipedia.org/wiki/Modularity_%28networks%29)). This is mostly a visual aid.
* Sizes of Nodes are proportional to their [Betweenness Centrality](http://en.wikipedia.org/wiki/Betweenness_centrality)
* Thick arrows indicate parent/child relationships (arrows point to the child), as they are present in the specification documents.
* Thin arrows indicate crossreferences (arrows point to the target of the link). These can either be real links or in-text mentions of other artifacts. In the ReqIF-files those are represented as *SpecRelations*.

## How these files where produced

This gives a rough overview of the creation process (mostly intended as a note to myself).

### Generating proper input files

*Note: This is only for reference. The provided files have already gone through this.*

1. clean up CSVs (i.e. remove false external links)
 1. open each `nodes.csv` and jump to the end
 2. scanning backwards through the file look for spurious nodes; note down their identifier (first column) and delete them
 3. stop scanning when you see the first node belonging to the current chapter (external nodes are always written after the internal nodes)
 4. save and close the file
 5. open the corresponding `edges.csv`
 6. search for the identifiers of the second step in the 3rd column
 7. delete all matching lines
 8. save and close the file
2. merge the CSVs (only if a combined representation of several chapters is desired)
 1. For each `nodes.csv`: remove the first line and concatenate the remainder to a big file called `nodesCombined.csv`. I.e. 
```sed '1d' nodes.csv >> nodesCombined.csv```
 2. For each `edges.csv`: remove the first line and concatenate the remainder to a big file called `edgesCombined.csv`. I.e
```sed '1d' edges.csv >> edgesCombined.csv```
 3. Remove duplicate nodes from `nodesCombined.csv` (these are external links encountered several times in different chapters - we only want to keep the node which represents the actual target).
On Unix this will do:
```sort --field-separator="," -k 1,1 nodesCombined.csv | tac | sort -u --field-separator="," -k 1,1 > nodesCombinedCleaned.csv```
(sort by the first column, then reverse the result and ultimately sort again, retaining only the first entry [which thanks to the reversing will always be the longest text and thus the *real* target] of any duplicates).
 5. Prefix `nodesCombinedCleaned.csv` with the original CSV-header. I.e.
```head -n1 nodes.csv | cat - nodesCombinedCleaned.csv > nodesFinal.csv```
 6. Prefix `edgesCombinded.csv` with the original CSV-header. I.e.
```head -n1 edges.csv | cat - edgesCombined.csv > edgesFinal.csv```
 7. `nodesFinal.csv` and `edgesFinal.csv` can now be used as an input to Gephi/Excel/R/whatever


### Gephi preferences

This lists the preferences used to create the example renderings.

#### Preview Settings

* Node Labels
 * Show Labels: *on*
 * Proportional Size: *off*
* Edges
 * Thickness: *1.5*
 * Color: *Source*
 * Curved: *off*

#### Statistics

* Run *Network Diameter* (leaving the default *Directed* option active)
* Run *Modularity*, set Resolution to your liking

#### Partition

* Click `Refresh`
* Select *Modularity Class* as the Parameter for Nodes and hit `Apply`

#### Ranking

* Set *Betweenness Centrality* as the Ranking parameter for Nodes, activate the diamond (Size/Weight settings) and choose *10* for Min and *150* for Max
* Click `Apply`

#### Layout

* Run `graphviz` with the default settings; make sure to use a patched version of the respective plugin - otherwise it will break for large networks
* Optionally run `Noverlap` afterwards to make the graph look nicer (graphviz does not know about the node sizes)
