#!bin/sh
cat /etc/passwd | grep -v "#" | sed -e 'N;s/^.*\n//' | tr ":" " " | cut -d\  -f1 | rev | sort | tail -r | sed -n $FT_LINE1','$FT_LINE2'p' | tr "\n" ", " | rev | sed "s/,/\./" | rev | sed "s/,/, /g" | tr -d '\n'