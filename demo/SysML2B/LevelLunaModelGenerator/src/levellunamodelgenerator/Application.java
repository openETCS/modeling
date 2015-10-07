package levellunamodelgenerator;

import java.io.File;
import java.util.ArrayList;

import org.eclipse.core.runtime.Platform;
import org.eclipse.emf.common.util.BasicMonitor;
import org.eclipse.emf.common.util.URI;
import org.eclipse.equinox.app.IApplication;
import org.eclipse.equinox.app.IApplicationContext;
import org.openetcs.sysml2b.transformation.common.main.M_MainSysMLTransform;

/**
 * This class controls all aspects of the application's execution
 */
public class Application implements IApplication {

	/* (non-Javadoc)
	 * @see org.eclipse.equinox.app.IApplication#start(org.eclipse.equinox.app.IApplicationContext)
	 */
	public Object start(IApplicationContext context) throws Exception {

		String targetDirectory = "C:/Users/mentre/git/modeling/demo/SysML2B/LevelLuna_generated_B";
		String inputModel = "C:/Users/mentre/git/modeling/demo/SysML2B/LevelLuna/level.uml";
		
		
		
		URI modelURI = URI.createFileURI(inputModel);		
        File folder = new File(targetDirectory);

		M_MainSysMLTransform generator = new M_MainSysMLTransform(modelURI, folder, new ArrayList<String>());
		generator.doGenerate(new BasicMonitor());
		
		return IApplication.EXIT_OK;
	}

	/* (non-Javadoc)
	 * @see org.eclipse.equinox.app.IApplication#stop()
	 */
	public void stop() {
		// nothing to do
	}
}
