ldapsearch -Q sn="*bon*" | grep "sn:" | sed "s/sn://" | wc -l | sed "s/^[ \t]*//"
