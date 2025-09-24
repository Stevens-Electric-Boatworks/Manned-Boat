// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from boat_data_interfaces:msg/ElectricalData.idl
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
#include "boat_data_interfaces/msg/detail/electrical_data__struct.h"
#include "boat_data_interfaces/msg/detail/electrical_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool boat_data_interfaces__msg__electrical_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("boat_data_interfaces.msg._electrical_data", (char *)PyUnicode_1BYTE_DATA(module_attr), 41) == 0);
    assert(strncmp("ElectricalData", (char *)PyUnicode_1BYTE_DATA(name_attr), 14) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  boat_data_interfaces__msg__ElectricalData * ros_message = _ros_message;
  {  // vbat
    PyObject * field = PyObject_GetAttrString(_pymsg, "vbat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vbat = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vebat
    PyObject * field = PyObject_GetAttrString(_pymsg, "vebat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vebat = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temp_bat
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp_bat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temp_bat = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_percent
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_percent");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->battery_percent = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // current_bat
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_bat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_bat = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bms_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_temp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bms_temp = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // can_bus_util_percent
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_bus_util_percent");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_bus_util_percent = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * boat_data_interfaces__msg__electrical_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ElectricalData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("boat_data_interfaces.msg._electrical_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ElectricalData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  boat_data_interfaces__msg__ElectricalData * ros_message = (boat_data_interfaces__msg__ElectricalData *)raw_ros_message;
  {  // vbat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vbat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vbat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vebat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vebat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vebat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp_bat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temp_bat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp_bat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_percent
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->battery_percent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_percent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_bat
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->current_bat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_bat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_temp
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->bms_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_bus_util_percent
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_bus_util_percent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_bus_util_percent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
