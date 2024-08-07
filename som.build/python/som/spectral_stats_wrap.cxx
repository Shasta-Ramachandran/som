#include<array>
#include<complex>
#include<string>
#include<iostream> //for std::cout...
#include<cstddef>
using dcomplex = std::complex<double>;

// C.f. https://numpy.org/doc/1.21/reference/c-api/array.html#importing-the-api
#define PY_ARRAY_UNIQUE_SYMBOL _cpp2py_ARRAY_API

// first the basic stuff
#include <cpp2py/cpp2py.hpp>
#include <cpp2py/converters/string.hpp>

// for converters
#include <cpp2py/converters/vector.hpp>
#include <cpp2py/converters/string.hpp>
#include <cpp2py/converters/function.hpp>
#include <algorithm>


//------------------------------------------------------------------------------------------------------
//---------------------   includes and using  -------------------
//------------------------------------------------------------------------------------------------------
#define TRIQS_PYTHON_WRAPPER_MODULE_spectral_stats

#include "som/spectral_stats.hpp"




using namespace cpp2py;


#include <cpp2py/converters/pair.hpp>
#include <cpp2py/converters/vector.hpp>
#include <nda_py/cpp2py_converters.hpp>
#include <triqs/cpp2py_converters/gf.hpp>
using namespace nda;
using namespace som;






//------------------------------------------------------------------------------------------------------
// Second all the classes and enums wrapped by imported modules
// Most converters will be automatically included
//------------------------------------------------------------------------------------------------------



//------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------

//--------------------- Generated converters --------------------------


// We use the order, in the following order (which is necessary for compilation : we need the converters in the implementations)
// - function/method declaration
// - implement type, and all tables
// - implement the converter of types, then of associated regular_type if any.
// - implement functions/method.
//
//----------------------------------------------------------------
//---------------------  function declarations -------------------
//----------------------------------------------------------------

//--------------------- all functions/methods with args, kwds, including constructors -----------------------------

 static PyObject* spectral_stats_spectral_integral(PyObject *self, PyObject *args, PyObject *keywds);
 static PyObject* spectral_stats_spectral_avg(PyObject *self, PyObject *args, PyObject *keywds);
 static PyObject* spectral_stats_spectral_disp(PyObject *self, PyObject *args, PyObject *keywds);
 static PyObject* spectral_stats_spectral_corr(PyObject *self, PyObject *args, PyObject *keywds);

// ------------------------------- Loop on all classes ----------------------------------------------------


//----------------------------------------------------------------
//---------------------  implementation --------------------------
//----------------------------------------------------------------

// ------------------------------- Loop on all classes ----------------------------------------------------


//--------------------- Converters of enums --------------------------


namespace cpp2py {

template <> struct py_converter<resolution_function> {
 static PyObject * c2py(resolution_function x) {
    if (x == rectangle) return PyUnicode_FromString("rectangle");
    if (x == lorentzian) return PyUnicode_FromString("lorentzian");
   return PyUnicode_FromString("gaussian"); // last case separate to avoid no return warning of compiler
 }
 static resolution_function py2c(PyObject * ob){
   std::string s = PyUnicode_AsUTF8(ob);
    if (s == "rectangle") return rectangle;
    if (s == "lorentzian") return lorentzian;
   return gaussian;
 }
 static bool is_convertible(PyObject *ob, bool raise_exception) {
   if (!PyUnicode_Check(ob)) {
     if (raise_exception) PyErr_SetString(PyExc_ValueError, "Convertion of C++ enum resolution_function : the object is not a string");
     return false;
   }
   std::string s = PyUnicode_AsUTF8(ob);
    if (s == "rectangle") return true;
    if (s == "lorentzian") return true;
    if (s == "gaussian") return true;
   if (raise_exception) {
    auto err = "Convertion of C++ enum resolution_function : \nThe string \"" + s +"\" is not in [rectangle,lorentzian,gaussian]";
    PyErr_SetString(PyExc_ValueError, err.c_str());
   }
   return false;
 }
};

}

//--------------------- define all functions/methods with args, kwds, including constructors -----------------------------


 static PyObject* spectral_stats_spectral_integral(PyObject *self, PyObject *args, PyObject *keywds) {

  static constexpr int n_overloads = 3;

  [[maybe_unused]] PyObject * py_result; //final result, except for constructor

  std::array<pyref,n_overloads> errors;

  // If no overload, we avoid the err_list and let the error go through (to save some code).
    {// overload spectral_integral(double z_m, double delta_m, configuration c, resolution_function r_func) -> double
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<double>, double *, double>;
     _type_0 __z_m = _type_0{}; // not default for wrapped type please
     using _type_1 = std::conditional_t<is_wrapped_v<double>, double *, double>;
     _type_1 __delta_m = _type_1{}; // not default for wrapped type please
     using _type_2 = std::conditional_t<is_wrapped_v<configuration>, configuration *, configuration>;
     _type_2 __c = _type_2{}; // not default for wrapped type please
     using _type_3 = std::conditional_t<is_wrapped_v<resolution_function>, resolution_function *, resolution_function>;
     _type_3 __r_func = _type_3{}; // not default for wrapped type please
     static const char *kwlist[] = {"z_m","delta_m","c","r_func",NULL};
     static const char * format = "ddO&O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	 ,&__z_m ,&__delta_m,converter_for_parser<configuration> ,&__c,converter_for_parser<resolution_function> ,&__r_func))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) z_m = deref_is_wrapped(__z_m);
       static_assert(std::is_reference<decltype(z_m)>::value || std::is_pointer<decltype(z_m)>::value, "internal error");
       decltype(auto) delta_m = deref_is_wrapped(__delta_m);
       static_assert(std::is_reference<decltype(delta_m)>::value || std::is_pointer<decltype(delta_m)>::value, "internal error");
       decltype(auto) c = deref_is_wrapped(__c);
       static_assert(std::is_reference<decltype(c)>::value || std::is_pointer<decltype(c)>::value, "internal error");
       decltype(auto) r_func = deref_is_wrapped(__r_func);
       static_assert(std::is_reference<decltype(r_func)>::value || std::is_pointer<decltype(r_func)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      try {
        
        double result =  spectral_integral(z_m,delta_m,c,r_func); // the call is here. It sets up "result" : sets up in the python layer.
         py_result = convert_to_python(std::move(result));
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. spectral_integral(double z_m, double delta_m, configuration c, resolution_function r_func) -> double \n.. in implementation of function spectral_stats.spectral_integral", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[0] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[0] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload spectral_integral(double z_m, double delta_m, configuration c, resolution_function r_func) -> double
    {// overload spectral_integral(triqs::mesh::refreq mesh, configuration c, resolution_function r_func) -> vector<double>
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<triqs::mesh::refreq>, triqs::mesh::refreq *, triqs::mesh::refreq>;
     _type_0 __mesh = _type_0{}; // not default for wrapped type please
     using _type_1 = std::conditional_t<is_wrapped_v<configuration>, configuration *, configuration>;
     _type_1 __c = _type_1{}; // not default for wrapped type please
     using _type_2 = std::conditional_t<is_wrapped_v<resolution_function>, resolution_function *, resolution_function>;
     _type_2 __r_func = _type_2{}; // not default for wrapped type please
     static const char *kwlist[] = {"mesh","c","r_func",NULL};
     static const char * format = "O&O&O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	,converter_for_parser<triqs::mesh::refreq> ,&__mesh,converter_for_parser<configuration> ,&__c,converter_for_parser<resolution_function> ,&__r_func))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) mesh = deref_is_wrapped(__mesh);
       static_assert(std::is_reference<decltype(mesh)>::value || std::is_pointer<decltype(mesh)>::value, "internal error");
       decltype(auto) c = deref_is_wrapped(__c);
       static_assert(std::is_reference<decltype(c)>::value || std::is_pointer<decltype(c)>::value, "internal error");
       decltype(auto) r_func = deref_is_wrapped(__r_func);
       static_assert(std::is_reference<decltype(r_func)>::value || std::is_pointer<decltype(r_func)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      try {
        
        vector<double> result =  spectral_integral(mesh,c,r_func); // the call is here. It sets up "result" : sets up in the python layer.
         py_result = convert_to_python(std::move(result));
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. spectral_integral(triqs::mesh::refreq mesh, configuration c, resolution_function r_func) -> vector<double> \n.. in implementation of function spectral_stats.spectral_integral", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[1] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[1] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload spectral_integral(triqs::mesh::refreq mesh, configuration c, resolution_function r_func) -> vector<double>
    {// overload spectral_integral(std::vector<std::pair<double,double>> intervals, configuration c, resolution_function r_func) -> vector<double>
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<std::vector<std::pair<double,double>>>, std::vector<std::pair<double,double>> *, std::vector<std::pair<double,double>>>;
     _type_0 __intervals = _type_0{}; // not default for wrapped type please
     using _type_1 = std::conditional_t<is_wrapped_v<configuration>, configuration *, configuration>;
     _type_1 __c = _type_1{}; // not default for wrapped type please
     using _type_2 = std::conditional_t<is_wrapped_v<resolution_function>, resolution_function *, resolution_function>;
     _type_2 __r_func = _type_2{}; // not default for wrapped type please
     static const char *kwlist[] = {"intervals","c","r_func",NULL};
     static const char * format = "O&O&O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	,converter_for_parser<std::vector<std::pair<double,double>>> ,&__intervals,converter_for_parser<configuration> ,&__c,converter_for_parser<resolution_function> ,&__r_func))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) intervals = deref_is_wrapped(__intervals);
       static_assert(std::is_reference<decltype(intervals)>::value || std::is_pointer<decltype(intervals)>::value, "internal error");
       decltype(auto) c = deref_is_wrapped(__c);
       static_assert(std::is_reference<decltype(c)>::value || std::is_pointer<decltype(c)>::value, "internal error");
       decltype(auto) r_func = deref_is_wrapped(__r_func);
       static_assert(std::is_reference<decltype(r_func)>::value || std::is_pointer<decltype(r_func)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      try {
        
        vector<double> result =  spectral_integral(intervals,c,r_func); // the call is here. It sets up "result" : sets up in the python layer.
         py_result = convert_to_python(std::move(result));
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. spectral_integral(std::vector<std::pair<double,double>> intervals, configuration c, resolution_function r_func) -> vector<double> \n.. in implementation of function spectral_stats.spectral_integral", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[2] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[2] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload spectral_integral(std::vector<std::pair<double,double>> intervals, configuration c, resolution_function r_func) -> vector<double>

   static const char * overloads_signatures[] = {"spectral_integral(double z_m, double delta_m, configuration c, resolution_function r_func) -> double", "spectral_integral(triqs::mesh::refreq mesh, configuration c, resolution_function r_func) -> vector<double>", "spectral_integral(std::vector<std::pair<double,double>> intervals, configuration c, resolution_function r_func) -> vector<double>"};

   // FIXME Factorize this
   // finally, no overload was successful. Composing a detailed error message, with the reason of failure of each overload
   {
     std::string err_list =
        "Error: no suitable C++ overload found in implementation of function spectral_stats.spectral_integral\n";
     for (int i = 0; i < errors.size(); ++i) {
      err_list = err_list + "\n" + overloads_signatures[i] + " \n failed with the error : \n  ";
      // check if error is not NULL and can be converted at all
      // otherwise unconvertible erros can lead to SegFaults
      if (errors[i] and PyUnicode_Check((PyObject *)errors[i])) {
        err_list += PyUnicode_AsUTF8((PyObject *)errors[i]);
      } else {
        err_list += "Error message was not convertible to raw string.";
      }
      err_list += "\n";
     }
    PyErr_SetString(PyExc_TypeError,err_list.c_str());
   }
   error_return :
   return NULL;
 }

 static PyObject* spectral_stats_spectral_avg(PyObject *self, PyObject *args, PyObject *keywds) {

  static constexpr int n_overloads = 2;

  [[maybe_unused]] PyObject * py_result; //final result, except for constructor

  std::array<pyref,n_overloads> errors;

  // If no overload, we avoid the err_list and let the error go through (to save some code).
    {// overload spectral_avg(som_core cont, long i, triqs::mesh::refreq mesh, resolution_function r_func) -> vector<double>
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<som_core>, som_core *, som_core>;
     _type_0 __cont = _type_0{}; // not default for wrapped type please
     using _type_1 = std::conditional_t<is_wrapped_v<long>, long *, long>;
     _type_1 __i = _type_1{}; // not default for wrapped type please
     using _type_2 = std::conditional_t<is_wrapped_v<triqs::mesh::refreq>, triqs::mesh::refreq *, triqs::mesh::refreq>;
     _type_2 __mesh = _type_2{}; // not default for wrapped type please
     using _type_3 = std::conditional_t<is_wrapped_v<resolution_function>, resolution_function *, resolution_function>;
     _type_3 __r_func = _type_3{}; // not default for wrapped type please
     static const char *kwlist[] = {"cont","i","mesh","r_func",NULL};
     static const char * format = "O&O&O&O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	,converter_for_parser<som_core> ,&__cont,converter_for_parser<long> ,&__i,converter_for_parser<triqs::mesh::refreq> ,&__mesh,converter_for_parser<resolution_function> ,&__r_func))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) cont = deref_is_wrapped(__cont);
       static_assert(std::is_reference<decltype(cont)>::value || std::is_pointer<decltype(cont)>::value, "internal error");
       decltype(auto) i = deref_is_wrapped(__i);
       static_assert(std::is_reference<decltype(i)>::value || std::is_pointer<decltype(i)>::value, "internal error");
       decltype(auto) mesh = deref_is_wrapped(__mesh);
       static_assert(std::is_reference<decltype(mesh)>::value || std::is_pointer<decltype(mesh)>::value, "internal error");
       decltype(auto) r_func = deref_is_wrapped(__r_func);
       static_assert(std::is_reference<decltype(r_func)>::value || std::is_pointer<decltype(r_func)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      try {
        
        vector<double> result =  spectral_avg(cont,i,mesh,r_func); // the call is here. It sets up "result" : sets up in the python layer.
         py_result = convert_to_python(std::move(result));
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. spectral_avg(som_core cont, long i, triqs::mesh::refreq mesh, resolution_function r_func) -> vector<double> \n.. in implementation of function spectral_stats.spectral_avg", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[0] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[0] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload spectral_avg(som_core cont, long i, triqs::mesh::refreq mesh, resolution_function r_func) -> vector<double>
    {// overload spectral_avg(som_core cont, long i, std::vector<std::pair<double,double>> intervals, resolution_function r_func) -> vector<double>
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<som_core>, som_core *, som_core>;
     _type_0 __cont = _type_0{}; // not default for wrapped type please
     using _type_1 = std::conditional_t<is_wrapped_v<long>, long *, long>;
     _type_1 __i = _type_1{}; // not default for wrapped type please
     using _type_2 = std::conditional_t<is_wrapped_v<std::vector<std::pair<double,double>>>, std::vector<std::pair<double,double>> *, std::vector<std::pair<double,double>>>;
     _type_2 __intervals = _type_2{}; // not default for wrapped type please
     using _type_3 = std::conditional_t<is_wrapped_v<resolution_function>, resolution_function *, resolution_function>;
     _type_3 __r_func = _type_3{}; // not default for wrapped type please
     static const char *kwlist[] = {"cont","i","intervals","r_func",NULL};
     static const char * format = "O&O&O&O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	,converter_for_parser<som_core> ,&__cont,converter_for_parser<long> ,&__i,converter_for_parser<std::vector<std::pair<double,double>>> ,&__intervals,converter_for_parser<resolution_function> ,&__r_func))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) cont = deref_is_wrapped(__cont);
       static_assert(std::is_reference<decltype(cont)>::value || std::is_pointer<decltype(cont)>::value, "internal error");
       decltype(auto) i = deref_is_wrapped(__i);
       static_assert(std::is_reference<decltype(i)>::value || std::is_pointer<decltype(i)>::value, "internal error");
       decltype(auto) intervals = deref_is_wrapped(__intervals);
       static_assert(std::is_reference<decltype(intervals)>::value || std::is_pointer<decltype(intervals)>::value, "internal error");
       decltype(auto) r_func = deref_is_wrapped(__r_func);
       static_assert(std::is_reference<decltype(r_func)>::value || std::is_pointer<decltype(r_func)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      try {
        
        vector<double> result =  spectral_avg(cont,i,intervals,r_func); // the call is here. It sets up "result" : sets up in the python layer.
         py_result = convert_to_python(std::move(result));
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. spectral_avg(som_core cont, long i, std::vector<std::pair<double,double>> intervals, resolution_function r_func) -> vector<double> \n.. in implementation of function spectral_stats.spectral_avg", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[1] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[1] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload spectral_avg(som_core cont, long i, std::vector<std::pair<double,double>> intervals, resolution_function r_func) -> vector<double>

   static const char * overloads_signatures[] = {"spectral_avg(som_core cont, long i, triqs::mesh::refreq mesh, resolution_function r_func) -> vector<double>", "spectral_avg(som_core cont, long i, std::vector<std::pair<double,double>> intervals, resolution_function r_func) -> vector<double>"};

   // FIXME Factorize this
   // finally, no overload was successful. Composing a detailed error message, with the reason of failure of each overload
   {
     std::string err_list =
        "Error: no suitable C++ overload found in implementation of function spectral_stats.spectral_avg\n";
     for (int i = 0; i < errors.size(); ++i) {
      err_list = err_list + "\n" + overloads_signatures[i] + " \n failed with the error : \n  ";
      // check if error is not NULL and can be converted at all
      // otherwise unconvertible erros can lead to SegFaults
      if (errors[i] and PyUnicode_Check((PyObject *)errors[i])) {
        err_list += PyUnicode_AsUTF8((PyObject *)errors[i]);
      } else {
        err_list += "Error message was not convertible to raw string.";
      }
      err_list += "\n";
     }
    PyErr_SetString(PyExc_TypeError,err_list.c_str());
   }
   error_return :
   return NULL;
 }

 static PyObject* spectral_stats_spectral_disp(PyObject *self, PyObject *args, PyObject *keywds) {

  static constexpr int n_overloads = 2;

  [[maybe_unused]] PyObject * py_result; //final result, except for constructor

  std::array<pyref,n_overloads> errors;

  // If no overload, we avoid the err_list and let the error go through (to save some code).
    {// overload spectral_disp(som_core cont, long i, triqs::mesh::refreq mesh, vector<double> avg, resolution_function r_func) -> vector<double>
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<som_core>, som_core *, som_core>;
     _type_0 __cont = _type_0{}; // not default for wrapped type please
     using _type_1 = std::conditional_t<is_wrapped_v<long>, long *, long>;
     _type_1 __i = _type_1{}; // not default for wrapped type please
     using _type_2 = std::conditional_t<is_wrapped_v<triqs::mesh::refreq>, triqs::mesh::refreq *, triqs::mesh::refreq>;
     _type_2 __mesh = _type_2{}; // not default for wrapped type please
     using _type_3 = std::conditional_t<is_wrapped_v<vector<double>>, vector<double> *, vector<double>>;
     _type_3 __avg = _type_3{}; // not default for wrapped type please
     using _type_4 = std::conditional_t<is_wrapped_v<resolution_function>, resolution_function *, resolution_function>;
     _type_4 __r_func = _type_4{}; // not default for wrapped type please
     static const char *kwlist[] = {"cont","i","mesh","avg","r_func",NULL};
     static const char * format = "O&O&O&O&O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	,converter_for_parser<som_core> ,&__cont,converter_for_parser<long> ,&__i,converter_for_parser<triqs::mesh::refreq> ,&__mesh,converter_for_parser<vector<double>> ,&__avg,converter_for_parser<resolution_function> ,&__r_func))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) cont = deref_is_wrapped(__cont);
       static_assert(std::is_reference<decltype(cont)>::value || std::is_pointer<decltype(cont)>::value, "internal error");
       decltype(auto) i = deref_is_wrapped(__i);
       static_assert(std::is_reference<decltype(i)>::value || std::is_pointer<decltype(i)>::value, "internal error");
       decltype(auto) mesh = deref_is_wrapped(__mesh);
       static_assert(std::is_reference<decltype(mesh)>::value || std::is_pointer<decltype(mesh)>::value, "internal error");
       decltype(auto) avg = deref_is_wrapped(__avg);
       static_assert(std::is_reference<decltype(avg)>::value || std::is_pointer<decltype(avg)>::value, "internal error");
       decltype(auto) r_func = deref_is_wrapped(__r_func);
       static_assert(std::is_reference<decltype(r_func)>::value || std::is_pointer<decltype(r_func)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      try {
        
        vector<double> result =  spectral_disp(cont,i,mesh,avg,r_func); // the call is here. It sets up "result" : sets up in the python layer.
         py_result = convert_to_python(std::move(result));
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. spectral_disp(som_core cont, long i, triqs::mesh::refreq mesh, vector<double> avg, resolution_function r_func) -> vector<double> \n.. in implementation of function spectral_stats.spectral_disp", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[0] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[0] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload spectral_disp(som_core cont, long i, triqs::mesh::refreq mesh, vector<double> avg, resolution_function r_func) -> vector<double>
    {// overload spectral_disp(som_core cont, long i, std::vector<std::pair<double,double>> intervals, vector<double> avg, resolution_function r_func) -> vector<double>
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<som_core>, som_core *, som_core>;
     _type_0 __cont = _type_0{}; // not default for wrapped type please
     using _type_1 = std::conditional_t<is_wrapped_v<long>, long *, long>;
     _type_1 __i = _type_1{}; // not default for wrapped type please
     using _type_2 = std::conditional_t<is_wrapped_v<std::vector<std::pair<double,double>>>, std::vector<std::pair<double,double>> *, std::vector<std::pair<double,double>>>;
     _type_2 __intervals = _type_2{}; // not default for wrapped type please
     using _type_3 = std::conditional_t<is_wrapped_v<vector<double>>, vector<double> *, vector<double>>;
     _type_3 __avg = _type_3{}; // not default for wrapped type please
     using _type_4 = std::conditional_t<is_wrapped_v<resolution_function>, resolution_function *, resolution_function>;
     _type_4 __r_func = _type_4{}; // not default for wrapped type please
     static const char *kwlist[] = {"cont","i","intervals","avg","r_func",NULL};
     static const char * format = "O&O&O&O&O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	,converter_for_parser<som_core> ,&__cont,converter_for_parser<long> ,&__i,converter_for_parser<std::vector<std::pair<double,double>>> ,&__intervals,converter_for_parser<vector<double>> ,&__avg,converter_for_parser<resolution_function> ,&__r_func))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) cont = deref_is_wrapped(__cont);
       static_assert(std::is_reference<decltype(cont)>::value || std::is_pointer<decltype(cont)>::value, "internal error");
       decltype(auto) i = deref_is_wrapped(__i);
       static_assert(std::is_reference<decltype(i)>::value || std::is_pointer<decltype(i)>::value, "internal error");
       decltype(auto) intervals = deref_is_wrapped(__intervals);
       static_assert(std::is_reference<decltype(intervals)>::value || std::is_pointer<decltype(intervals)>::value, "internal error");
       decltype(auto) avg = deref_is_wrapped(__avg);
       static_assert(std::is_reference<decltype(avg)>::value || std::is_pointer<decltype(avg)>::value, "internal error");
       decltype(auto) r_func = deref_is_wrapped(__r_func);
       static_assert(std::is_reference<decltype(r_func)>::value || std::is_pointer<decltype(r_func)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      try {
        
        vector<double> result =  spectral_disp(cont,i,intervals,avg,r_func); // the call is here. It sets up "result" : sets up in the python layer.
         py_result = convert_to_python(std::move(result));
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. spectral_disp(som_core cont, long i, std::vector<std::pair<double,double>> intervals, vector<double> avg, resolution_function r_func) -> vector<double> \n.. in implementation of function spectral_stats.spectral_disp", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[1] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[1] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload spectral_disp(som_core cont, long i, std::vector<std::pair<double,double>> intervals, vector<double> avg, resolution_function r_func) -> vector<double>

   static const char * overloads_signatures[] = {"spectral_disp(som_core cont, long i, triqs::mesh::refreq mesh, vector<double> avg, resolution_function r_func) -> vector<double>", "spectral_disp(som_core cont, long i, std::vector<std::pair<double,double>> intervals, vector<double> avg, resolution_function r_func) -> vector<double>"};

   // FIXME Factorize this
   // finally, no overload was successful. Composing a detailed error message, with the reason of failure of each overload
   {
     std::string err_list =
        "Error: no suitable C++ overload found in implementation of function spectral_stats.spectral_disp\n";
     for (int i = 0; i < errors.size(); ++i) {
      err_list = err_list + "\n" + overloads_signatures[i] + " \n failed with the error : \n  ";
      // check if error is not NULL and can be converted at all
      // otherwise unconvertible erros can lead to SegFaults
      if (errors[i] and PyUnicode_Check((PyObject *)errors[i])) {
        err_list += PyUnicode_AsUTF8((PyObject *)errors[i]);
      } else {
        err_list += "Error message was not convertible to raw string.";
      }
      err_list += "\n";
     }
    PyErr_SetString(PyExc_TypeError,err_list.c_str());
   }
   error_return :
   return NULL;
 }

 static PyObject* spectral_stats_spectral_corr(PyObject *self, PyObject *args, PyObject *keywds) {

  static constexpr int n_overloads = 2;

  [[maybe_unused]] PyObject * py_result; //final result, except for constructor

  std::array<pyref,n_overloads> errors;

  // If no overload, we avoid the err_list and let the error go through (to save some code).
    {// overload spectral_corr(som_core cont, long i, triqs::mesh::refreq mesh, vector<double> avg, resolution_function r_func) -> matrix<double>
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<som_core>, som_core *, som_core>;
     _type_0 __cont = _type_0{}; // not default for wrapped type please
     using _type_1 = std::conditional_t<is_wrapped_v<long>, long *, long>;
     _type_1 __i = _type_1{}; // not default for wrapped type please
     using _type_2 = std::conditional_t<is_wrapped_v<triqs::mesh::refreq>, triqs::mesh::refreq *, triqs::mesh::refreq>;
     _type_2 __mesh = _type_2{}; // not default for wrapped type please
     using _type_3 = std::conditional_t<is_wrapped_v<vector<double>>, vector<double> *, vector<double>>;
     _type_3 __avg = _type_3{}; // not default for wrapped type please
     using _type_4 = std::conditional_t<is_wrapped_v<resolution_function>, resolution_function *, resolution_function>;
     _type_4 __r_func = _type_4{}; // not default for wrapped type please
     static const char *kwlist[] = {"cont","i","mesh","avg","r_func",NULL};
     static const char * format = "O&O&O&O&O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	,converter_for_parser<som_core> ,&__cont,converter_for_parser<long> ,&__i,converter_for_parser<triqs::mesh::refreq> ,&__mesh,converter_for_parser<vector<double>> ,&__avg,converter_for_parser<resolution_function> ,&__r_func))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) cont = deref_is_wrapped(__cont);
       static_assert(std::is_reference<decltype(cont)>::value || std::is_pointer<decltype(cont)>::value, "internal error");
       decltype(auto) i = deref_is_wrapped(__i);
       static_assert(std::is_reference<decltype(i)>::value || std::is_pointer<decltype(i)>::value, "internal error");
       decltype(auto) mesh = deref_is_wrapped(__mesh);
       static_assert(std::is_reference<decltype(mesh)>::value || std::is_pointer<decltype(mesh)>::value, "internal error");
       decltype(auto) avg = deref_is_wrapped(__avg);
       static_assert(std::is_reference<decltype(avg)>::value || std::is_pointer<decltype(avg)>::value, "internal error");
       decltype(auto) r_func = deref_is_wrapped(__r_func);
       static_assert(std::is_reference<decltype(r_func)>::value || std::is_pointer<decltype(r_func)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      try {
        
        matrix<double> result =  spectral_corr(cont,i,mesh,avg,r_func); // the call is here. It sets up "result" : sets up in the python layer.
         py_result = convert_to_python(std::move(result));
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. spectral_corr(som_core cont, long i, triqs::mesh::refreq mesh, vector<double> avg, resolution_function r_func) -> matrix<double> \n.. in implementation of function spectral_stats.spectral_corr", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[0] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[0] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload spectral_corr(som_core cont, long i, triqs::mesh::refreq mesh, vector<double> avg, resolution_function r_func) -> matrix<double>
    {// overload spectral_corr(som_core cont, long i, std::vector<std::pair<double,double>> intervals, vector<double> avg, resolution_function r_func) -> matrix<double>
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<som_core>, som_core *, som_core>;
     _type_0 __cont = _type_0{}; // not default for wrapped type please
     using _type_1 = std::conditional_t<is_wrapped_v<long>, long *, long>;
     _type_1 __i = _type_1{}; // not default for wrapped type please
     using _type_2 = std::conditional_t<is_wrapped_v<std::vector<std::pair<double,double>>>, std::vector<std::pair<double,double>> *, std::vector<std::pair<double,double>>>;
     _type_2 __intervals = _type_2{}; // not default for wrapped type please
     using _type_3 = std::conditional_t<is_wrapped_v<vector<double>>, vector<double> *, vector<double>>;
     _type_3 __avg = _type_3{}; // not default for wrapped type please
     using _type_4 = std::conditional_t<is_wrapped_v<resolution_function>, resolution_function *, resolution_function>;
     _type_4 __r_func = _type_4{}; // not default for wrapped type please
     static const char *kwlist[] = {"cont","i","intervals","avg","r_func",NULL};
     static const char * format = "O&O&O&O&O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	,converter_for_parser<som_core> ,&__cont,converter_for_parser<long> ,&__i,converter_for_parser<std::vector<std::pair<double,double>>> ,&__intervals,converter_for_parser<vector<double>> ,&__avg,converter_for_parser<resolution_function> ,&__r_func))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) cont = deref_is_wrapped(__cont);
       static_assert(std::is_reference<decltype(cont)>::value || std::is_pointer<decltype(cont)>::value, "internal error");
       decltype(auto) i = deref_is_wrapped(__i);
       static_assert(std::is_reference<decltype(i)>::value || std::is_pointer<decltype(i)>::value, "internal error");
       decltype(auto) intervals = deref_is_wrapped(__intervals);
       static_assert(std::is_reference<decltype(intervals)>::value || std::is_pointer<decltype(intervals)>::value, "internal error");
       decltype(auto) avg = deref_is_wrapped(__avg);
       static_assert(std::is_reference<decltype(avg)>::value || std::is_pointer<decltype(avg)>::value, "internal error");
       decltype(auto) r_func = deref_is_wrapped(__r_func);
       static_assert(std::is_reference<decltype(r_func)>::value || std::is_pointer<decltype(r_func)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      try {
        
        matrix<double> result =  spectral_corr(cont,i,intervals,avg,r_func); // the call is here. It sets up "result" : sets up in the python layer.
         py_result = convert_to_python(std::move(result));
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. spectral_corr(som_core cont, long i, std::vector<std::pair<double,double>> intervals, vector<double> avg, resolution_function r_func) -> matrix<double> \n.. in implementation of function spectral_stats.spectral_corr", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[1] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[1] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload spectral_corr(som_core cont, long i, std::vector<std::pair<double,double>> intervals, vector<double> avg, resolution_function r_func) -> matrix<double>

   static const char * overloads_signatures[] = {"spectral_corr(som_core cont, long i, triqs::mesh::refreq mesh, vector<double> avg, resolution_function r_func) -> matrix<double>", "spectral_corr(som_core cont, long i, std::vector<std::pair<double,double>> intervals, vector<double> avg, resolution_function r_func) -> matrix<double>"};

   // FIXME Factorize this
   // finally, no overload was successful. Composing a detailed error message, with the reason of failure of each overload
   {
     std::string err_list =
        "Error: no suitable C++ overload found in implementation of function spectral_stats.spectral_corr\n";
     for (int i = 0; i < errors.size(); ++i) {
      err_list = err_list + "\n" + overloads_signatures[i] + " \n failed with the error : \n  ";
      // check if error is not NULL and can be converted at all
      // otherwise unconvertible erros can lead to SegFaults
      if (errors[i] and PyUnicode_Check((PyObject *)errors[i])) {
        err_list += PyUnicode_AsUTF8((PyObject *)errors[i]);
      } else {
        err_list += "Error message was not convertible to raw string.";
      }
      err_list += "\n";
     }
    PyErr_SetString(PyExc_TypeError,err_list.c_str());
   }
   error_return :
   return NULL;
 }

// ------------------------------- Loop on all classes ----------------------------------------------------



// FIXME : remove this
//--------------------- function returning the list of classes, enum wrapped  -----------------------------

 static PyObject* _get_cpp2py_wrapped_class_enums(PyObject *self, PyObject *args, PyObject *keywds) {

  PyObject * d = PyDict_New();

  static const char * cls = "[]";
  static const char * ens = "[('som::resolution_function', 'som::', ['rectangle', 'lorentzian', 'gaussian'])]";
  static const char * inclu = "['som/spectral_stats.hpp']";

  PyDict_SetItemString(d, "classes", pyref(PyUnicode_FromString(cls)));
  PyDict_SetItemString(d, "enums", pyref(PyUnicode_FromString(ens)));
  PyDict_SetItemString(d, "module_name", pyref(PyUnicode_FromString("som.spectral_stats")));
  PyDict_SetItemString(d, "includes", pyref(PyUnicode_FromString(inclu)));

  return d;
 }

//--------------------- module function table  -----------------------------
// the table of the function of the module...
static PyMethodDef module_methods[] = {
    {"spectral_integral", (PyCFunction)spectral_stats_spectral_integral, METH_VARARGS| METH_KEYWORDS, "Evaluate spectral integral\n\n.. math::\n\n    i_m^{(j)} = \\int_{-\\infty}^\\infty dz \\bar K(m, z) A^{(j)}(z)\n\nfor a single energy interval.\n\n**Parameters:**\n\n:z_m: :class:`float`, Center of the energy interval.\n:delta_m: :class:`float`, Length of the energy interval.\n:c: :class:`som.Configuration`, Spectral function :math:`A^{(j)}(z)`.\n:r_func: :class:`str`, Name of the :ref:`resolution function\n         <resolution_functions>` :math:`\\bar K(m, z)`, one of ``rectangle``, ``lorentzian``, ``gaussian``.\n\n**Returns:** :class:`float`, Value of the integral.\n\n\n\nSignature : (float z_m, float delta_m, configuration c, resolution_function r_func) -> float\n   Evaluate spectral integral\n   \n   .. math::\n   \n       i_m^{(j)} = \\int_{-\\infty}^\\infty dz \\bar K(m, z) A^{(j)}(z)\n   \n   for a single energy interval.\n   \n   **Parameters:**\n   \n   :z_m: :class:`float`, Center of the energy interval.\n   :delta_m: :class:`float`, Length of the energy interval.\n   :c: :class:`som.Configuration`, Spectral function :math:`A^{(j)}(z)`.\n   :r_func: :class:`str`, Name of the :ref:`resolution function\n            <resolution_functions>` :math:`\\bar K(m, z)`, one of ``rectangle``, ``lorentzian``, ``gaussian``.\n   \n   **Returns:** :class:`float`, Value of the integral.\n   \nSignature : (triqs::mesh::refreq mesh, configuration c, resolution_function r_func) -> vector<double>\n   Evaluate spectral integrals\n   \n   .. math::\n   \n       i_m^{(j)} = \\int_{-\\infty}^\\infty dz \\bar K(m, z) A^{(j)}(z)\n   \n   for energy intervals centered around points of a regular energy mesh.\n   \n   **Parameters:**\n   \n   :mesh: :class:`triqs.gf.meshes.MeshReFreq`, Real energy mesh.\n   :c: :class:`som.Configuration`, Spectral function :math:`A^{(j)}(z)`.\n   :r_func: :class:`str`, Name of the :ref:`resolution function\n            <resolution_functions>` :math:`\\bar K(m, z)`, one of ``rectangle``, ``lorentzian``, ``gaussian``.\n   \n   **Returns:** Real 1D NumPy array of values :math:`i_m^{(j)}`.\n   \nSignature : (list[std::pair<double,double>] intervals, configuration c, resolution_function r_func) -> vector<double>\n   Evaluate spectral integrals\n   \n   .. math::\n   \n       i_m^{(j)} = \\int_{-\\infty}^\\infty dz \\bar K(m, z) A^{(j)}(z)\n   \n   for a list of real energy intervals.\n   \n   **Parameters:**\n   \n   :intervals: :class:`list` [:class:`float`, :class:`float`], List of pairs\n               (left interval boundary, right interval boundary).\n   :c: :class:`som.Configuration`, Spectral function :math:`A^{(j)}(z)`.\n   :r_func: :class:`str`, Name of the :ref:`resolution function\n            <resolution_functions>` :math:`\\bar K(m, z)`, one of ``rectangle``, ``lorentzian``, ``gaussian``.\n   \n   **Returns:** Real 1D NumPy array of values :math:`i_m^{(j)}`.\n   "},
    {"spectral_avg", (PyCFunction)spectral_stats_spectral_avg, METH_VARARGS| METH_KEYWORDS, "Compute spectral averages over a set of accumulated\nparticular solutions\n\n.. math::\n\n    i_m = \\frac{1}{J} \\sum_{j=1}^J i_m^{(j)}\n\nfor energy intervals centered around points of a regular energy mesh.\n\n**Parameters:**\n\n:cont: :class:`Som`, Analytic continuation object.\n:i: :class:`int`, Index of the diagonal matrix element of the observable used\n    to construct ``cont``.\n:mesh: :class:`triqs.gf.meshes.MeshReFreq`, Real energy mesh.\n:r_func: :class:`str`, Name of the :ref:`resolution function\n         <resolution_functions>` :math:`\\bar K(m, z)`, one of ``rectangle``, ``lorentzian``, ``gaussian``.\n\n**Returns:** Real 1D NumPy array of values :math:`i_m`.\n\n\n\nSignature : (som_core cont, int i, triqs::mesh::refreq mesh, resolution_function r_func) -> vector<double>\n   Compute spectral averages over a set of accumulated\n   particular solutions\n   \n   .. math::\n   \n       i_m = \\frac{1}{J} \\sum_{j=1}^J i_m^{(j)}\n   \n   for energy intervals centered around points of a regular energy mesh.\n   \n   **Parameters:**\n   \n   :cont: :class:`Som`, Analytic continuation object.\n   :i: :class:`int`, Index of the diagonal matrix element of the observable used\n       to construct ``cont``.\n   :mesh: :class:`triqs.gf.meshes.MeshReFreq`, Real energy mesh.\n   :r_func: :class:`str`, Name of the :ref:`resolution function\n            <resolution_functions>` :math:`\\bar K(m, z)`, one of ``rectangle``, ``lorentzian``, ``gaussian``.\n   \n   **Returns:** Real 1D NumPy array of values :math:`i_m`.\n   \nSignature : (som_core cont, int i, list[std::pair<double,double>] intervals, resolution_function r_func) -> vector<double>\n   Compute spectral averages over a set of accumulated\n   particular solutions\n   \n   .. math::\n   \n       i_m = \\frac{1}{J} \\sum_{j=1}^J i_m^{(j)}\n   \n   for a list of real energy intervals.\n   \n   **Parameters:**\n   \n   :cont: :class:`Som`, Analytic continuation object.\n   :i: :class:`int`, Index of the diagonal matrix element of the observable used\n       to construct ``cont``.\n   :intervals: :class:`list` [:class:`float`, :class:`float`], List of pairs\n               (left interval boundary, right interval boundary).\n   :r_func: :class:`str`, Name of the :ref:`resolution function\n            <resolution_functions>` :math:`\\bar K(m, z)`, one of ``rectangle``, ``lorentzian``, ``gaussian``.\n   \n   **Returns:** Real 1D NumPy array of values :math:`i_m`.\n   "},
    {"spectral_disp", (PyCFunction)spectral_stats_spectral_disp, METH_VARARGS| METH_KEYWORDS, "Compute spectral dispersions of a set of accumulated\nparticular solutions\n\n.. math::\n\n    \\sigma^2_m = \\frac{1}{J} \\sum_{j=1}^J (i_m^{(j)} - i_m)^2\n\nfor energy intervals centered around points of a regular energy mesh.\n\n**Parameters:**\n\n:cont: :class:`Som`, Analytic continuation object.\n:i: :class:`int`, Index of the diagonal matrix element of the observable used\n    to construct ``cont``.\n:mesh: :class:`triqs.gf.meshes.MeshReFreq`, Real energy mesh.\n:avg: Real 1D NumPy array of precomputed averages :math:`i_m`.\n:r_func: :class:`str`, Name of the :ref:`resolution function\n         <resolution_functions>` :math:`\\bar K(m, z)`, one of ``rectangle``, ``lorentzian``, ``gaussian``.\n\n**Returns:** Real 1D NumPy array of values :math:`\\sigma_m`.\n\n\n\nSignature : (som_core cont, int i, triqs::mesh::refreq mesh, vector<double> avg, resolution_function r_func) -> vector<double>\n   Compute spectral dispersions of a set of accumulated\n   particular solutions\n   \n   .. math::\n   \n       \\sigma^2_m = \\frac{1}{J} \\sum_{j=1}^J (i_m^{(j)} - i_m)^2\n   \n   for energy intervals centered around points of a regular energy mesh.\n   \n   **Parameters:**\n   \n   :cont: :class:`Som`, Analytic continuation object.\n   :i: :class:`int`, Index of the diagonal matrix element of the observable used\n       to construct ``cont``.\n   :mesh: :class:`triqs.gf.meshes.MeshReFreq`, Real energy mesh.\n   :avg: Real 1D NumPy array of precomputed averages :math:`i_m`.\n   :r_func: :class:`str`, Name of the :ref:`resolution function\n            <resolution_functions>` :math:`\\bar K(m, z)`, one of ``rectangle``, ``lorentzian``, ``gaussian``.\n   \n   **Returns:** Real 1D NumPy array of values :math:`\\sigma_m`.\n   \nSignature : (som_core cont, int i, list[std::pair<double,double>] intervals, vector<double> avg, resolution_function r_func) -> vector<double>\n   Compute spectral dispersions of a set of accumulated\n   particular solutions\n   \n   .. math::\n   \n       \\sigma^2_m = \\frac{1}{J} \\sum_{j=1}^J (i_m^{(j)} - i_m)^2\n   \n   for a list of real energy intervals.\n   \n   **Parameters:**\n   \n   :cont: :class:`Som`, Analytic continuation object.\n   :i: :class:`int`, Index of the diagonal matrix element of the observable used\n       to construct ``cont``.\n   :intervals: :class:`list` [:class:`float`, :class:`float`], List of pairs\n               (left interval boundary, right interval boundary).\n   :avg: Real 1D NumPy array of precomputed averages :math:`i_m`.\n   :r_func: :class:`str`, Name of the :ref:`resolution function\n            <resolution_functions>` :math:`\\bar K(m, z)`, one of ``rectangle``, ``lorentzian``, ``gaussian``.\n   \n   **Returns:** Real 1D NumPy array of values :math:`\\sigma_m`.\n   "},
    {"spectral_corr", (PyCFunction)spectral_stats_spectral_corr, METH_VARARGS| METH_KEYWORDS, "Compute spectral two-point correlators of a set\nof accumulated particular solutions\n\n.. math::\n\n    \\sigma_{mm'} = \\frac{1}{J} \\sum_{j=1}^J (i_m^{(j)} - i_m)\n                                            (i_{m'}^{(j)} - i_{m'})\n\nfor energy intervals centered around points of a regular energy mesh.\n\n**Parameters:**\n\n:cont: :class:`Som`, Analytic continuation object.\n:i: :class:`int`, Index of the diagonal matrix element of the observable used\n    to construct ``cont``.\n:mesh: :class:`triqs.gf.meshes.MeshReFreq`, Real energy mesh.\n:avg: Real 1D NumPy array of precomputed averages :math:`i_m`.\n:r_func: :class:`str`, Name of the :ref:`resolution function\n         <resolution_functions>` :math:`\\bar K(m, z)`, one of ``rectangle``, ``lorentzian``, ``gaussian``.\n\n**Returns:** Real 2D NumPy array of values :math:`\\sigma_{mm'}`.\n\n\n\nSignature : (som_core cont, int i, triqs::mesh::refreq mesh, vector<double> avg, resolution_function r_func) -> matrix<double>\n   Compute spectral two-point correlators of a set\n   of accumulated particular solutions\n   \n   .. math::\n   \n       \\sigma_{mm'} = \\frac{1}{J} \\sum_{j=1}^J (i_m^{(j)} - i_m)\n                                               (i_{m'}^{(j)} - i_{m'})\n   \n   for energy intervals centered around points of a regular energy mesh.\n   \n   **Parameters:**\n   \n   :cont: :class:`Som`, Analytic continuation object.\n   :i: :class:`int`, Index of the diagonal matrix element of the observable used\n       to construct ``cont``.\n   :mesh: :class:`triqs.gf.meshes.MeshReFreq`, Real energy mesh.\n   :avg: Real 1D NumPy array of precomputed averages :math:`i_m`.\n   :r_func: :class:`str`, Name of the :ref:`resolution function\n            <resolution_functions>` :math:`\\bar K(m, z)`, one of ``rectangle``, ``lorentzian``, ``gaussian``.\n   \n   **Returns:** Real 2D NumPy array of values :math:`\\sigma_{mm'}`.\n   \nSignature : (som_core cont, int i, list[std::pair<double,double>] intervals, vector<double> avg, resolution_function r_func) -> matrix<double>\n   Compute spectral two-point correlators of a set\n   of accumulated particular solutions\n   \n   .. math::\n   \n       \\sigma_{mm'} = \\frac{1}{J} \\sum_{j=1}^J (i_m^{(j)} - i_m)\n                                               (i_{m'}^{(j)} - i_{m'})\n   \n   for a list of real energy intervals.\n   \n   **Parameters:**\n   \n   :cont: :class:`Som`, Analytic continuation object.\n   :i: :class:`int`, Index of the diagonal matrix element of the observable used\n       to construct ``cont``.\n   :intervals: :class:`list` [:class:`float`, :class:`float`], List of pairs\n               (left interval boundary, right interval boundary).\n   :avg: Real 1D NumPy array of precomputed averages :math:`i_m`.\n   :r_func: :class:`str`, Name of the :ref:`resolution function\n            <resolution_functions>` :math:`\\bar K(m, z)`, one of ``rectangle``, ``lorentzian``, ``gaussian``.\n   \n   **Returns:** Real 2D NumPy array of values :math:`\\sigma_{mm'}`.\n   "},

    {"_get_cpp2py_wrapped_class_enums", (PyCFunction)_get_cpp2py_wrapped_class_enums, METH_VARARGS, "[Internal] Returns the list of wrapped objects  " },
    {NULL}  /* Sentinel */
};

//--------------------- module struct & init error definition ------------

static struct PyModuleDef spectral_stats_def =
{
    PyModuleDef_HEAD_INIT,
    "spectral_stats", /* name of module */
    "Statistical analysis of ensembles of spectral functions", /* module documentation, may be NULL */
    -1,   /* size of per-interpreter state of the module, or -1 if the module keeps state in global variables. */
    module_methods
};

//--------------------- hdf5 helper function -----------------------------
#ifdef H5_INTERFACE_INCLUDED

template <typename T, typename Enable = void>
struct _regular {
  using type = T;
};
template <typename T>
struct _regular<T, std::void_t<typename T::regular_type>> {
  using type = typename T::regular_type;
};

template <typename T> std::function<PyObject *(PyObject *, std::string)> make_py_h5_reader(const char *) {

  auto reader = [](PyObject *h5_gr, std::string const &name) -> PyObject * {
    auto gr = convert_from_python<h5::group>(h5_gr);

    // If T is a view type grab the regular_t of it
    using c_type = typename _regular<T>::type;

    try { // Now call the proper h5_read
      return convert_to_python(T(h5::h5_read<c_type>(gr, name)));
    }
    CATCH_AND_RETURN("in h5 reading of object" + typeid(c_type).name(), NULL);
  };

  return {reader};
}

#endif

//--------------------- module init function -----------------------------
extern "C" __attribute__((visibility("default"))) PyObject* PyInit_spectral_stats(void)
{

// import numpy iff 'numpy/arrayobject.h' included
#ifdef Py_ARRAYOBJECT_H
    import_array();
#endif

    PyImport_ImportModule("som");

    PyObject* m;


    m = PyModule_Create(&spectral_stats_def);
    if (m == NULL)  
      return NULL;



#ifdef H5_INTERFACE_INCLUDED
    // hdf5 registration
    pyref module = pyref::module("h5.formats");
    pyref register_class = module.attr("register_class");
#endif

    //std::cout << " INIT Module " << "spectral_stats" << std::endl;
    //std::cout << " table ptr count " << cpp2py::conv_table_sptr.use_count() << std::endl;
    // register all the types
    auto &conv_table  = *cpp2py::conv_table_sptr.get();
    //for(auto & [k, v]: conv_table){
      //std::cout << k << "\n";
    //}

    return m;
}
