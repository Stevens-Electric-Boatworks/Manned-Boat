// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from boat_data_interfaces:msg/GPIOData.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "boat_data_interfaces/msg/detail/gpio_data__struct.h"
#include "boat_data_interfaces/msg/detail/gpio_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool boat_data_interfaces__msg__gpio_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
    if (class_attr == NULL) {
      return false;
    }
    PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
    if (name_attr == NULL) {
      Py_DECREF(class_attr);
      return false;
    }
    PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
    if (module_attr == NULL) {
      Py_DECREF(name_attr);
      Py_DECREF(class_attr);
      return false;
    }

    // PyUnicode_1BYTE_DATA is just a cast
    assert(strncmp("boat_data_interfaces.msg._gpio_data", (char *)PyUnicode_1BYTE_DATA(module_attr), 35) == 0);
    assert(strncmp("GPIOData", (char *)PyUnicode_1BYTE_DATA(name_attr), 8) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  boat_data_interfaces__msg__GPIOData * ros_message = _ros_message;
  {  // coolant_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "coolant_temp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->coolant_temp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->throttle = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * boat_data_interfaces__msg__gpio_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GPIOData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("boat_data_interfaces.msg._gpio_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GPIOData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  boat_data_interfaces__msg__GPIOData * ros_message = (boat_data_interfaces__msg__GPIOData *)raw_ros_message;
  {  // coolant_temp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->coolant_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "coolant_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->throttle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
