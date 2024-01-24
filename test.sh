#!/bin/bash

# Boucle pour exécuter la commande 100 fois
for i in $(seq 1 100); do
    echo "Exécution numéro $i"

    # Génération d'une liste de nombres aléatoires
    ARG=$(seq 1 500 | shuf | tr '\n' ' ')

    # Exécution de la commande avec l'alias 'moha'
    output=$(./push_swap $ARG | wc -l)

    # Vérification de la sortie
    if [ $(echo $output | wc -w) -gt 5500 ]; then
        echo "Erreur lors de l'exécution $i : le nombre de mouvements dépasse 5500."
        continue
    fi

    # Affichage du résultat si tout va bien
    echo "Résultat de l'exécution $i : $output"
done

