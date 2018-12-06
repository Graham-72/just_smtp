<?php

use PHPMailer\PHPMailer\PHPMailer;

/**
 * @file
 * Make certain internals of PHPMailer available to the outside.
 */
class JustSmtpMailer extends PHPMailer {

  public function smtp_send($header, $body) {
    try {
      return array(
        'result' => 'success',
        'return' => $this->smtpSend($header, $body)
      );
    }
    catch (Exception $e) {
      return array(
        'result' => 'fail',
        'return' => $e->getMessage()
      );
    }
  }
}
