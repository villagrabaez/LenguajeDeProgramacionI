<?php

include 'Animal.php';

class Perro extends Animal
{
  public function action($action) {
    return $action;
  }
}

$perro = new Perro("Pupi", "Delmer");
echo "Soy un perro, mi nombre es {$perro->getNombre()} y soy de la raza {$perro->getRaza()} y me gusta {$perro->action("Perseguir a otros animales")}";