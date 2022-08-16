#include <iostream>
using namespace std;

int main(){
	cout<< "Content-type: text/html; charset: UTF-8;" << endl;
	cout<< ""<<endl;
	cout<< "<html><body>"<<endl;
	cout<< "<head>"<<endl;
	cout<< "<meta name=viewport; content=width=device-width, initial-scale=1.0;>" <<endl;
	cout<< "<style>" <<endl;
	cout<< ".box0{position: relative;width:1225px;height:690px;padding:10px;background-color:white;}" <<endl;
	cout<< ".box1{position: relative;width:1200px;height:550px;padding:10px;background-color:white;border:2px solid black;}"<<endl;
	cout<< ".box2{width:500px;height:80px;padding:10px;background-color:white;}"<<endl;
	cout<< ".box3{width:600px;height:130px;padding:5px;position: absolute;top: 10px;right: 16px;background-color:white;}"<<endl;
	cout<< "table{margin-left: auto;margin-right: auto;width:1200px;height:250px;}"<<endl;
	cout<< ".firma{position: absolute;bottom: 8px;right: 16px;font-size: 18px;}"<<endl;
	cout<< ".izquierda{text-align:left;}"<<endl;
	cout<< ".encabezado{border-style: dotted; }"<<endl;
	cout<< "h1 {text-align: center;}"<<endl;
	cout<< "</style>" <<endl;
	cout<< "</head>" <<endl;

	cout<< "<div class=box0>" <<endl;
	cout<< "<h1>UNIVERSIDAD MARIANO G&Aacute;LVEZ DE GUATEMALA</h1> " <<endl;
	cout<< "<div class=box1>" <<endl;

	cout<< "<div class=box2>" <<endl;
	cout<< "ASIGNACI&Oacute;N DE CURSOS<br>" <<endl;
	cout<< "Carnet: 5390-18-10587 <br>" <<endl;
	cout<< "Nombre: FREDY ESTUARDO <br>" <<endl;
	cout<< "Apellidos:REYES DEL CID <br>" <<endl;
	cout<< "Dire.casa: 3RA. 2-31 ANEXO LOS SAUCES, PAL&Iacute;N, ESCUINTLA,PAL&Iacute;N"<<endl;
	cout<< "</div>" <<endl;

	cout<< "<div class=box3>" <<endl;
	cout<< "Semestre/Trimestre: 22022<br>" <<endl;
	cout<< "Carrera:INGENIER&Iacute;A EN SISTEMAS DE INFORMACI&Oacute;N Y CIENCIAS DE LA COMPU <br>" <<endl;
	cout<< "Jornada: Domingo<br>" <<endl;
	cout<< "Ciclo: 10<br>" <<endl;
	cout<< "Mensual: Q. 925.00 <br>" <<endl;
	cout<< "Dire.casa: 3RA. 2-31 ANEXO LOS SAUCES, PAL&Iacute;N, ESCUINTLA,PAL&Iacute;N<br>" <<endl;
	cout<< "Fecha Asig: 15/08/2022 14:17:05" <<endl;
	cout<< "</div>" <<endl;
	cout<< "<br>" <<endl;
	cout<< "<br>" <<endl;
	cout<< "<br>" <<endl;
	cout<< "<table>" <<endl;
	cout<< "<tr >" <<endl;
	cout<< "<th colspan='6' class=encabezado >DETALLE</th>" <<endl;
	cout<< "</tr>" <<endl;
	cout<< "<tr class=izquierda>" <<endl;
	cout<< "<th >Fac</th>" <<endl;
	cout<< "<th>Cod</th>" <<endl;
	cout<< "<th>Nombre del curso</th>" <<endl;
	cout<< "<th>Horario</th>" <<endl;
	cout<< "<th>Aula</th>" <<endl;
	cout<< "<th>Secci&oacute;n</th>" <<endl;
	cout<< "</tr>" <<endl;
	cout<< "<tr>" <<endl;
	cout<< "<td>5390</td>" <<endl;
	cout<< "<td>046</td>" <<endl;
	cout<< "<td>TELECOMUNICACIONES</td>" <<endl;
	cout<< "<td>Do 1600 - 1800</td>" <<endl;
	cout<< "<td>B-204</td>" <<endl;
	cout<< "<td>A - OK</td>" <<endl;
	cout<< "</tr>" <<endl;
	cout<< "<tr>" <<endl;
	cout<< "<td>5390</td>" <<endl;
	cout<< "<td>047</td>" <<endl;
	cout<< "<td>SEMINARIO DE TECNOLOG&Iacute;AS DE LA INFORMACI&Oacute;N</td>" <<endl;
	cout<< "<td>Do 0900 - 1100</td>" <<endl;
	cout<< "<td>B-204</td>" <<endl;
	cout<< "<td>A - OK</td>" <<endl;
	cout<< "</tr>" <<endl;
	cout<< "<tr>" <<endl;
	cout<< "<td>5390</td>" <<endl;
	cout<< "<td>048</td>" <<endl;
	cout<< "<td>ASEGURAMIENTO DE LA CALIDAD DEL SOFTWARE</td>" <<endl;
	cout<< "<td>Do 1400 - 1600</td>" <<endl;
	cout<< "<td>B-204</td>" <<endl;
	cout<< "<td>A - OK</td>" <<endl;
	cout<< "</tr>" <<endl;
	cout<< "<tr>" <<endl;
	cout<< "<td>5390</td>" <<endl;
	cout<< "<td>049</td>" <<endl;
	cout<< "<td>PROYECTO DE GRADUACI&Oacute;N II</td>" <<endl;
	cout<< "<td>Do 1100 - 1300</td>" <<endl;
	cout<< "<td>B-204</td>" <<endl;
	cout<< "<td>A - OK</td>" <<endl;
	cout<< "</tr>" <<endl;
	cout<< "<tr>" <<endl;
	cout<< "<td>5390</td>" <<endl;
	cout<< "<td>050</td>" <<endl;
	cout<< "<td>SEGURIDAD Y AUDITOR&Iacute;A DE SISTEMAS</td>" <<endl;
	cout<< "<td>Do 0700 - 0900</td>" <<endl;
	cout<< "<td>B-204</td>" <<endl;
	cout<< "<td>A - OK</td>" <<endl;
	cout<< "</tr>" <<endl;
	cout<< "</table>" <<endl;
	cout<< "<br>" <<endl;

	cout<< "<div >" <<endl;
	cout<< "<b>Usuario:</b> freyesd2 <b>Contrase&ntilde;a</b> 581625Est$ (si no la ha cambiado) <b>Correo Electr&oacute;nico:</b> freyesd2@miumg.edu.gt<br>" <<endl;
	cout<< "INSTRUCCIONES <b>1).</b> Lea detenidamente este documento y proceda a firmarlo en el lugar que corresponde. <b>2).</b> Guarde el original, pues es su constancia OFICIAL DE INSCRIPCI&Oacute;N <br>" <<endl;
	cout<< "y pres&eacute;ntelo para cualquier tr&aacute;mite. <b>3).</b> USTED es el &uacute;nico responsable de los cursos que se asigna. <b> 4).</b> Si USTED, recibe sus cursos en otra secci&oacute;n que no sea la descrita<br>" <<endl;
	cout<< "en este documento, no se le podr&aacute;n ingresar sus notas. <b>5).</b> Aplica MULTA de Q. 25.00 por cada Evaluaci&oacute;n a la que se someta estando insolvente.<br>" <<endl;
	cout<< "<b>EL COSTO DE REPOSICI&Oacute;N DE ESTE DOCUMENTO ES DE Q. 10.00 EN TESORER&Iacute;A</b><br>" <<endl;

	cout<< "<div class=firma>" <<endl;
	cout<< "Firma Alumno:__________________________ " <<endl;
	cout<< "</div>" <<endl;

	cout<< "</div>" <<endl;
	cout<< "<br>" <<endl;
	cout <<"<br>" <<endl;
	cout<< "<h1>CONOCER&Eacute;IS LA VERDAD Y LA VERDAD OS HAR&Aacute; LIBRES</h1>" <<endl;
	cout<< "</div>" <<endl;
	cout<< "</div>" <<endl;



	cout<< "</body></html>"<<endl;
	return 0;
}
