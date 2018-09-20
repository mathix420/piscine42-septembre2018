ldapsearch -Q "uid=z*" | grep "cn:" | cut -c5- | sed "/^\s*$/d" | sort -fr
