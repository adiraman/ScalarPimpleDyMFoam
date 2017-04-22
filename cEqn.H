// Define effective diffusion for turbulent transport (DEff)
        volScalarField DEff("DEff", ((turbulence->nu()/Sc) + (turbulence->nut()/Sct)));

        fvScalarMatrix cEqn
        (
            fvm::ddt(c)
            + fvm::div(phi,c)
            - fvm::laplacian(DEff,c)
            == fvOptions(c)
        );

        cEqn.relax();
        cEqn.solve();
