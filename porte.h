#define TIME_ACTION 1000

class Porte {
public:
                Porte(int pin_right, int pin_left);
  void          open();
  void          close();
  bool          isFinished();

private:
  int         _left;
  int         _right;
  bool          _open;
  unsigned long _time_last_action;
};
