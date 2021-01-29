<?php

// Una clase es tipo o una especie de algo
class Persona {
  // Atributos
  protected $nombre; // public, protected, private
  protected $apellido;
  public $nickname;
  public $changedNickname = 0;

  // Metodo Constructor
  public function __construct($nombre, $apellido, $nickname = null) {
    $this->nombre = $nombre;
    $this->apellido = $apellido;
    $this->nickname = $nickname;
  }

  // Metodos
  // Getters
  public function getNombre() {
    return $this->nombre;
  }

  public function getApellido() {
    return $this->apellido;
  }

  public function getNombreCompleto() {
    return $this->nombre . ' ' . $this->apellido;
  }

  // Setters
  public function setNickname( $nickname ) {
    if ( $this->changedNickname >= 2 ) {
      echo "No puedes cambiar tu nombre de usuario mas de 2 veces";

      return;
    }

    $this->nickname = strtoupper($nickname);

    $this->changedNickname ++;
  }

  // public function setNombre( $Nombre ) {
  //   $this->nombre = $Nombre;
  // }

  // public function setApellido( $apellido ) {
  //   $this->apellido = $apellido;
  // }
}

$persona = new Persona('Jose', 'Lopez');
$persona->setNickname('joselo');
// $persona->setNickname('joselo1');

echo "{$persona->getNombreCompleto()} tu nombre de usuario es: {$persona->nickname}";
