#ifndef OPTIMIZATION_METHOD_TYPE_H_
#define OPTIMIZATION_METHOD_TYPE_H_
/**
 * \file optimizationMethodType.h
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 */

/**
 * Helper namespace to hide OptimizationMethodType enum from global context.
 */

namespace OptimizationMethodType {

/** 
 * \brief Optimization Method Type 
 * Optimization Method Type 
 */
enum OptimizationMethodType {
    /** 
     * \brief SVD 
     * SVD 
     */
    SVD = 0,
    /** 
     * \brief Gradient Descent 
     * Gradient Descent 
     */
    GRADIENT_DESCENT = 1,
    /** 
     * \brief Marquardt Levenberg 
     * Marquardt-Levenberg 
     */
    MARQUARDT_LEVENBERG = 2,
    /** 
     * \brief Classic Kalman 
     * Classic Kalman 
     */
    CLASSIC_KALMAN = 3,
    /** 
     * \brief Kalman 
     * Kalman 
     */
    KALMAN = 4,
    /** 
     * \brief Last virtual option to run cycles to
     */
    OPTIMIZATION_METHOD_TYPE_LAST
};


static inline const char *getName(const OptimizationMethodType &value)
{
    switch (value) 
    {
     case SVD : return "SVD"; break ;
     case GRADIENT_DESCENT : return "GRADIENT_DESCENT"; break ;
     case MARQUARDT_LEVENBERG : return "MARQUARDT_LEVENBERG"; break ;
     case CLASSIC_KALMAN : return "CLASSIC_KALMAN"; break ;
     case KALMAN : return "KALMAN"; break ;
     default : return "Not in range"; break ;
     
    }
    return "Not in range";
}

} //namespace OptimizationMethodType

#endif  //OPTIMIZATION_METHOD_TYPE_H_
