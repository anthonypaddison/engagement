<?php

function JSlink($url) {
  $timestamp = (int)(filemtime($url) / 60);
  echo '<script type="text/javascript" language="javascript" src="', $url, '?', $timestamp, '"></script>', "\n";
}

function CSSlink($url) {
  $timestamp = (int)(filemtime($url) / 60);
  echo '<link type="text/css" rel="stylesheet" href="', $url, '?', $timestamp, '">', "\n";
}
