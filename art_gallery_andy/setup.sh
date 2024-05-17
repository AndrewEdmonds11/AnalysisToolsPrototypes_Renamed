if [[ "`alias | grep mu2einit`" == "" ]];
then
    echo "You do not have the alias for mu2einit set. You should update your login scripts following the instructions here: https://mu2ewiki.fnal.gov/wiki/Shells#Setup_scripts. For time being, we'll just run the source command"
    source /cvmfs/mu2e.opensciencegrid.org/setupmu2e-art.sh
else
    echo "has mu2einit"
fi

setup mu2e
muse setup SimJob MDC2020ac

if [[ "${MUSE_FLAVOR}" == "sl7" ]];
then
    setup gallery v1_22_03 -q e28:prof
fi
