
var _ = require('underscore');
var fs = require('fs');
var modulecpp = fs.readFileSync(
  'templates/module.cpp','utf8');
var clsheader = fs.readFileSync(
  'templates/class.h','utf8');
var clscpp = fs.readFileSync(
  'templates/class.cpp','utf8');
var gyp = fs.readFileSync(
  'templates/binding.gyp','utf8');

var definition = {
  modulename : 'mymod',
  classes : ['One','Two']
};

var filenames = _(definition.classes)
  .map(function(s) { return s.toLowerCase(); });
var headermarkers = _(definition.classes)
  .map(function(s) { return '__'+s.toUpperCase()+'_H__'; });

console.log(_.template(modulecpp, {
  modulename : definition.modulename,
  clsnames : definition.classes,
  filenames : filenames
}));

_(definition.classes).each(function (clsname) {
  console.log(_.template(clsheader, {
    headermarker : '__'+clsname.toUpperCase()+'_H__',
    clsname : clsname
  }));
  console.log(_.template(clscpp, {
    headername : clsname.toLowerCase(),
    clsname : clsname
  }));
});

console.log(_.template(gyp, definition));
