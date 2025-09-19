// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from gpio_interfaces:msg/GPIOResult.idl
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
#include "gpio_interfaces/msg/detail/gpio_result__struct.h"
#include "gpio_interfaces/msg/detail/gpio_result__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool gpio_interfaces__msg__gpio_result__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("gpio_interfaces.msg._gpio_result", (char *)PyUnicode_1BYTE_DATA(module_attr), 32) == 0);
    assert(strncmp("GPIOResult", (char *)PyUnicode_1BYTE_DATA(name_attr), 10) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  gpio_interfaces__msg__GPIOResult * ros_message = _ros_message;
  {  // temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->temp = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // imu_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gps_lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gps_lat = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gps_lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_lon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gps_lon = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gps_alt
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_alt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gps_alt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * gpio_interfaces__msg__gpio_result__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GPIOResult */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("gpio_interfaces.msg._gpio_result");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GPIOResult");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  gpio_interfaces__msg__GPIOResult * ros_message = (gpio_interfaces__msg__GPIOResult *)raw_ros_message;
  {  // temp
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gps_lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_lon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gps_lon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_alt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gps_alt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_alt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
