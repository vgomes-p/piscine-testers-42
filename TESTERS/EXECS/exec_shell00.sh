clear
echo '<<<<<<<<< EVALUATION SCRIPT HAS STARTED >>>>>>>>>'
sleep 1
echo ' ' && echo ' ' && echo ' ' && echo ' '
cd ex00
echo '----------TESTING Z----------'
echo "output:"
cat z
echo ' ' && echo ' ' && echo ' '


cd ../ex01
sleep 1
echo '----------TESTING TESTSHELL00----------'
tar -xvf testShell00.tar
echo "command line: "
echo "output:"
ls -l testShell00
echo ' ' && echo ' ' && echo ' '
cd ..


cd ex02
sleep 1
echo '----------TESTING EXO2----------'
tar -xvf exo2.tar
echo "output 1:"
ls -l
echo ' ' && echo ' ' && echo ' '
cd ..


sleep 1
echo '----------TESTING SSH-ME----------'
echo "output:"
cat ex03/id_rsa_pub
echo ' ' && echo ' ' && echo ' '


sleep 1
echo '----------TESTING MIDLS----------'
echo "script code: "
cat ex04/midLS
echo ' '
chmod 777 ex04/midLS
echo "output:"
./ex04/midLS
echo ' ' && echo ' ' && echo ' ' && echo ' '


sleep 1
echo '----------TESTING GIT_COMMIT----------'
echo "script code:"
cat ex04/git_commit.sh
echo ' '
chmod 777 ex05/git_commit.sh
echo "output:"
./ex05/git_commit.sh
echo ' ' && echo ' ' && echo ' ' && echo ' '
sleep 1.5
echo '<<<<<<<<< EVALUATION HAS FINISHED >>>>>>>>>'