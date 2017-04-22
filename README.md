# Overview #

This is an application that extends the existing pimpleDyMFoam solver in OpenFOAM to solve for the passive advection diffusion of a scalar. This is implemented for OpenFOAM-2.4.0 but can easily be extended for more recent versions. Support is also added to dynamically refine the mesh using tagging of cells based on the normalized vorticity magnitude or the passive scalar concentration. The normalized vorticity is calculated from user provided reference length and velocity values. These must be provided in the transportProperties file. Schmidt number and turbulent Schmidt numbers must also be provided here. An example is as follows:-

                                                                            
Sc                Sc [ 0 0 0 0 0 0 0 ] 1.49;                                  
                                                                            
Sct               Sct [ 0 0 0 0 0 0 0 ] 0.7;                                 
                                                                            
Lref              Lref [ 0 1 0 0 0 0 0 ] 0.01;                              
                                                                             
Vref              Vref [ 0 1 -1 0 0 0 0 ] 7.5;


# How do I get set up? #

Source the openfoam environment (bashrc or cshrc file) to load the proper environment
variables. Place this folder in the $WM_PROJECT_USER_DIR/applications/solvers/ directory
and run wmake from the simpleFoamTemp directory. The application will be installed in the
directory set up by the environment variable $FOAM_USER_APPBIN