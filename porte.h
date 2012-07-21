#define TIME_ACTION 1000

class Porte {
public:
                Porte(int pin_right, int pin_left, byte val_close , byte val_close);
  void          open();
  void          close();
  bool          isFinished();

private:
  byte          _left;
  byte          _right;
  bool          _open;
  unsigned long _time_last_action;
  byte          _val_open;
  byte          _val_close;
};
