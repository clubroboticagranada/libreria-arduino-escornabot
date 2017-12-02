/*
Librería escornabot por Prudencio Luna y Pedro Ruiz
V 0.1 (8/11/2017): primera versión del programa, incorpora control de motores paso a paso (avances, retrocesos, giros, parada)
, elección del tipo de excitación de bobinas, control de leds, zumbador y botonera.
*/

#ifndef escornabot_h
#define escornabot_h

enum BotonLed { Trasero=1, Derecho=2, Delantero=3, Izquierdo=4,Central=5};

// Descripción de la clase Escornabot
class escornabot {
  //Definición de elementos públicos
  public:
  // constructor:
 	escornabot();//sin pasar parámetros
	escornabot(int kindStep);// pasa el tipo de paso 1 (un sola bobina a la vez), paso 2 (dos bobinas a la vez)

  const static int NumeroBotones=5;
  const static int NumeroLeds=5;

  // procedimiento para mover los motores:
  void drive (float laps, int speed);
	//procemiento para girar:
	void turn (float laps, int speed);
    // procedimiento para parar:
  void stop();
	//procedimiento para encender y apagar leds
	void ledON(int ledNumber);
  void ledOFF(int ledNumber);
  int ledState(int ledNumber);

	//procedimiento para encender y apagar el zumbador
	void buzzON(void);
  void buzzOFF(void);
	//procedimiento para saber el botón que se ha pulsado
	int pushButton(void);
	//procedimiento que devuelve valor enviado por bluetooth
	int blueT(void);
	//procedimiento que devuelve la versión de la librería
	int escornabot::version(void);
  protected:


  //Definición de elementos privados
  private:


};

#endif //escornabot_h
