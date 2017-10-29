#pragma once

#include <stdint.h>
#include <string>


namespace inputs{
  struct __Object;
  struct __Object_VT;

  struct __String;
  struct __String_VT;

  struct __Class;
  struct __Class_VT;

  struct __A;
  struct __A_VT;

  struct __B;
  struct __B_VT;


  typedef __Object* Object;
  typedef __String* String;
  typedef __Class* Class;
  typedef __A* A;
  typedef __B* B;


  struct __Object {

    __Object_VT* __vptr;

    __Object();

    static int32_t hashCode(Object);
    static bool equals(Object);
    static Class getClass(Object);
    static String toString(Object);


    static Class __class();


    static __Object_VT __vtable;

  };



  struct __Object_VT {
    Class __is_a;


    int32_t (*hashCode)(Object);
    bool (*equals)(Object, Object);
    Class (*getClass)(Object);
    String (*toString)(Object);


    __Object_VT()
    : __is_a(__Object::__class()),
      hashCode(&__Object::__hashCode),
      equals(&__Object::__equals),
      getClass(&__Object::__getClass),
      toString(&__Object::__toString),
    {
    }
  };



  struct __String {

    __String_VT* __vptr;
    std::string data;

    __String(std::string);

    static int32_t hashCode(String,int32_t);
    static bool equals(String,int32_t);
    static int32_t length(String,int32_t);
    static char charAt(String,int32_t);


    static Class __class();


    static __String_VT __vtable;

  };



  struct __String_VT {
    Class __is_a;


    int32_t (*hashCode)(String);
    bool (*equals)(String, Object);
    Class (*getClass)(String);
    String (*toString)(String);
    int32_t (*length)(String);
    char (*charAt)(String);


    __String_VT()
    : __is_a(__String::__class()),
      hashCode(&__String::__hashCode()),
      equals(&__String::equals),
      getClass((Class(*)(String)) &__Object::getClass,
      toString(&__toString::toString),
      charAt(&__String::charAt),
    {
    }
  };



  struct __Class {

    __Class_VT* __vptr;
    String name;
    Class parent;

    __Class(String,Class);

    static String toString(Class,Object);
    static String getName(Class,Object);
    static Class getSuperclass(Class,Object);
    static bool isInstance(Class,Object);


    static Class __class();


    static __Class_VT __vtable;

  };



  struct __Class_VT {
    Class __is_a;


    int32_t (*hashCode)(Class);
    bool (*equals)(Class, Object);
    Class (*getClass)(Class);
    String (*toString)(Class);
    String (*getName)(Class);
    String (*getSuperclass)(Class);
    String (*isInstance)(Class);


    __Class_VT()
    : __is_a(__Class::__class()),
      hashCode((int32_t(*)(Class)) &__Object::hashCode),
      equals((bool(*)(Class,Object)) &__Object::equals),
      getClass((Class(*)(Class)) &__Object::getClass),
      toString(&__Class::toString),
      getName(&__Class::getName),
      getSuperclass(&__Class::getSuperclass),
      isInstance(&__Class::isInstance),
    {
    }
  };



  struct __A {

    __A_VT* __vptr;
    int32_t i;

    __A();
    __A(int32_t);

    int32_t get();


    static Class __class();


    static __A_VT __vtable;

  };



  struct __A_VT {
    Class __is_a;


    int32_t (*hashCode)(A);
    bool (*equals)(A, Object);
    Class (*getClass)(A);
    String (*toString)(A);
    int32_t (*get)(A);


    __A_VT()
    : __is_a(__A::__class()),
      hashCode((int32_t(*)(A)) &__Object::hashCode),
      equals((bool(*)(A, Object)) &__Object::equals),
      getClass((Class(*)(A)) &__Object::getClass),
      toString((String(*)(A)) &__Object::toString),
      get((int32_t(*)(A)) &__A::get),
    {
    }
  };



  struct __B {

    int32_t i;
    __B_VT* __vptr;

    __B();
    __B(int32_t);

    int32_t get();


    static Class __class();


    static __B_VT __vtable;

  };



  struct __B_VT {
    Class __is_a;


    int32_t (*hashCode)(B);
    bool (*equals)(B, Object);
    Class (*getClass)(B);
    String (*toString)(B);
    int32_t (*get)(B);


    __B_VT()
    : __is_a(__B::__class()),
      hashCode((int32_t(*)(B)) &__Object::hashCode),
      equals((bool(*)(B, Object)) &__Object::equals),
      getClass((Class(*)(B)) &__Object::getClass),
      toString((String(*)(B)) &__Object::toString),
      get((int32_t(*)(B)) &__B::get),
    {
    }
  };



