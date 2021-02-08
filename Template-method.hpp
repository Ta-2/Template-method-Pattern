#ifndef TM_HPP
#define TM_HPP

class recipe {
public:
  void create (){
    first_material();
    second_material();
    third_material();
  }
  virtual void first_material() = 0;
  virtual void second_material() = 0;
  virtual void third_material() = 0;
  virtual ~recipe(){};
};

#endif
