clear
echo '<<<<<<<<< EVALUATION SCRIPT HAS STARTED >>>>>>>>>'
sleep 1
echo ' ' && echo ' ' && echo ' ' && echo ' '
cd ex01
echo '----------TESTING PRINT_GROUPS----------'
echo "command line: "
cat print_groups.sh
echo ' '
echo "output:"
./print_groups.sh
echo ' ' && echo ' ' && echo ' '


cd ../ex02
sleep 1
echo '----------TESTING FIND_SH----------'
 echo "command line: "
cat find_sh.sh
echo ' '
echo "output 1:"
./find_sh.sh
cd ..
echo ' '
echo "output 2:"
./ex02/find_sh.sh
echo ' ' && echo ' ' && echo ' '


cd ex03
sleep 1
echo '----------TESTING COUNT_FILES----------'
 echo "command line: "
cat count_files.sh
echo ' '
echo "output 1:"
./count_files.sh
cd ..
echo ' '
echo "output 2:"
./ex03/count_files.sh
echo ' ' && echo ' ' && echo ' '


cd ex04
sleep 1
echo '----------TESTING MAC----------'
 echo "command line: "
cat MAC.sh
echo ' '
echo "output:"
./MAC.sh
echo ' ' && echo ' ' && echo ' '


cd ../ex05
sleep 1
echo '----------TESTING *MaRV*----------'
 echo "file name: "
echo \"\\\?\$\*\'MaRViN\'\*\$\?\\\"
echo ' '
echo "output:"
ls -lRa *MaRV* | cat -e

echo ' ' && echo ' ' && echo ' ' && echo ' '
sleep 1.5
echo '<<<<<<<<< EVALUATION HAS FINISHED >>>>>>>>>'