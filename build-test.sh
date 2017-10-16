#refresh Dependent libraries
cd ../
sh refresh.sh
cd FGServer
#rebuild FGSNode
rm -rf build
sh build.sh
cd build
#test FGSNode
./FGSNode
cd ..