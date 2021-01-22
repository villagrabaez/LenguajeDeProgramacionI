<?php

// Una clase es tipo o una especie de algo
class Persona {
  // Atributos
  public $nombre;
  public $apellido;

  // Metodo Constructor
  public function __construct($nombre, $apellido) {
    $this->nombre = $nombre;
    $this->apellido = $apellido;
  }

  // Metodos
  public function fullName() {
    return $this->nombre . ' ' . $this->apellido;
  }
}

// Objeto
// $persona1 = new Persona; // Instanciamos la clase Persona
// $persona1->nombre = "Bernardino";
// $persona1->apellido = "Villagra";
// echo $persona1->fullName();

// Objeto
// $persona2 = new Persona; // Instanciamos la clase Persona
// $persona2->nombre = "Ramon";
// $persona2->apellido = "Perez";
// echo $persona2->fullName();

$persona1 = new Persona("Bernardino", "Villagra");

$persona2 = new Persona("Ramon", "Perez");

echo "{$persona1->fullName()} es amigo de {$persona2->fullName()}";
