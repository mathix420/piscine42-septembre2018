curl -s https://projects.intra.42.fr/uploads/document/document/266/contacts_hard.txt | grep -i "nicolas\tbauer" | grep -o '\(([0-9]\{3\})\|[0-9]\{3\}\)[ -]\?[0-9]\{3\}[ -]\?[0-9]\{2,\}'