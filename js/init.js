$(document).ready(function()
{ 
    $('.button-collapse').sideNav();
    $('.dropdown-button').dropdown({'hover': false});
    $('select').not('.disabled').material_select();
    $('.parallax').parallax();
     $('ul.tabs').tabs('select_tab', 'tab_id');
    $('.slider').slider({height: 450});
    $('.collapsible').collapsible({accordion : false });
    $('.materialboxed').materialbox();

  
});

//efecto scroll
var options = [ 
    {selector: '#image-test', offset: 500, callback: 'Materialize.fadeInImage("#image-test")' },
{selector: '#image-test2', offset: 500, callback: 'Materialize.fadeInImage("#image-test2")'},
{selector: '#image-test3', offset: 500, callback: 'Materialize.fadeInImage("#image-test3")' }]; 
Materialize.scrollFire(options);