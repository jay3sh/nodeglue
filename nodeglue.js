
var _ = require('underscore');
var fs = require('fs');
var source = fs.readFileSync(
  'templates/module.cpp','utf8');

var data = {
  modulename : 'mymod',
  clsnames : ['One','Two'],
  filenames : ['one','two'],
};
console.log(_.template(source, data));

