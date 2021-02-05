<?php

include 'Animal.php';

class Gato extends Animal
{
  public function action($action) {
    return $action;
  }
}

$gato = new Gato("Michi", "GatoRaza");
echo "Soy un gato, me llamo {$gato->getNombre()} soy de la raza {$gato->getRaza()} me gusta {$gato->action("Maullar")} ";