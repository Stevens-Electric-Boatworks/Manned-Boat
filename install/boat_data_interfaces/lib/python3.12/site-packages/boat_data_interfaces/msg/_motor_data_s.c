// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from boat_data_interfaces:msg/MotorData.idl
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
#include "boat_data_interfaces/msg/detail/motor_data__struct.h"
#include "boat_data_interfaces/msg/detail/motor_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool boat_data_interfaces__msg__motor_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("boat_data_interfaces.msg._motor_data", (char *)PyUnicode_1BYTE_DATA(module_attr), 36) == 0);
    assert(strncmp("MotorData", (char *)PyUnicode_1BYTE_DATA(name_attr), 9) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  boat_data_interfaces__msg__MotorData * ros_message = _ros_message;
  {  // rpm_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "rpm_a");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rpm_a = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rpm_b
    PyObject * field = PyObject_GetAttrString(_pymsg, "rpm_b");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rpm_b = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // motor_synch
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_synch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->motor_synch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // propulsion_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "propulsion_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->propulsion_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * boat_data_interfaces__msg__motor_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotorData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("boat_data_interfaces.msg._motor_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotorData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  boat_data_interfaces__msg__MotorData * ros_message = (boat_data_interfaces__msg__MotorData *)raw_ros_message;
  {  // rpm_a
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rpm_a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rpm_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rpm_b
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rpm_b);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rpm_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_synch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->motor_synch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_synch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // propulsion_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->propulsion_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "propulsion_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
