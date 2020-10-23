#!/bin/bash

blih -u hamidou.tessilimi@epitech.eu repository create $1
blih -u hamidou.tessilimi@epitech.eu repository setacl $1 ramassage-tek r
blih -u hamidou.tessilimi@epitech.eu repository getacl $1
