touch -A -000001 bomb.txt | ls -lT | sed -n "n;p" | cut -c47- | rev | cut -c15- | rev | tr "	" "\n"
