for f in *.txt;  
	do  echo $f;
	echo "---------------------------------------------------------------";
	./a.out ${f} ; #echo ${f}; 
done;