#!/bin/bash
TRACKCONV=./trackconv
TSTAMP=$(date "+%d.%m.%y %H:%M")

function error {
  echo $1
  exit 1
}

function gentrack {
  track=$1
  out=$2
  start=$3
  end=$4
  title=$5

  echo "generating $track"
  echo "track::clear" > $out
  $TRACKCONV -t $track -s $start -e $end >> $out
  echo "track::title \"$title ($TSTAMP)\"" >> $out
}

if [ ! -e $TRACKCONV ]
then
  error "could not execute $TRACKCONV"
fi

gentrack US_01_to_12 ../AmsterdamUtrecht.trk 0 33000 "Amsterdam-Utrecht"
gentrack US_13_to_16 ../US13-16.trk 0 33000 "US 13-16"
gentrack Sheet14_only ../Sheet14.trk 0 10000 "Sheet 14"
