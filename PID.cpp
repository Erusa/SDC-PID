#include "PID.h"

/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {
  Kp = 0;
  Ki = 0;
  Kd = 0;
  
  p_error = 0;
  i_error = 0;
  d_error = 0;
}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  /**
   * TODO: Initialize PID coefficients (and errors, if needed)
   */
  Kp = Kp_;
  Ki = Ki_;
  Kd = Kd_;
  
  //p_error = 0;
  //i_error = 0;
  //d_error = 0;
}

void PID::UpdateError(double cte) {
  /**
   * TODO: Update PID errors based on cte.
   */
  double prev_cte = p_error;
  p_error = cte;
  i_error += cte;
  d_error = cte - prev_cte;
}

double PID::TotalError(double cte) {
  /**
   * TODO: Calculate and return the total error
   */
  double totalError;
  UpdateError(cte);
  totalError = -p_error*Kp - i_error*Ki - d_error*Kd;
  
  if (totalError > 1){ totalError = 1;}
  else if (totalError < -1) {totalError = -1;}
  
  return totalError;  // TODO: Add your total error calc here!
}