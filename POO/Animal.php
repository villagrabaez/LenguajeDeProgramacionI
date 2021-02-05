<?php

class Animal
{
  protected $nombre;
  protected $raza;

  public function __construct($nombre, $raza) {
    $this->nombre = $nombre;
    $this->raza = $raza;
  }

  public function setNombre($nombre) {
    $this->nombre = $nombre;
  }

  public function setRaza($raza) {
    $this->raza = $raza;
  }

  public function getNombre() {
    return $this->nombre;
  }

  public function getRaza() {
    return $this->raza;
  }

  public function action($action) {
    echo "El animal $action";
  }
}
