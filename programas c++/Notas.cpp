#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	
	//declaración de variables
	int nota1, nota2, nota3, nota4;
	float promedio;
	char nombre[50];
	
	cout<<"ingrese el nombre del estudiante "; gets (nombre);
	
	cout<<"ingrese la nota #1 "; cin>> nota1;
	cout<<"ingrese la nota #2 "; cin>> nota2;
	cout<<"ingrese la nota #3 "; cin>> nota3;
	cout<<"ingrese la nota #4 "; cin>> nota4;
	
	//formula de promedio
	promedio = (nota1 + nota2 + nota3 + nota4)/4;
	
	//condiciones
	if(nota1 > 100 && nota2 > 100 && nota3 > 100 && nota4 > 100)
	{
		cout<<"alguna de las notas es mayor a 100 por lo cual el promedio no se puede visualizar"<< endl;
	}
	else
	{
		if (nota1 < 0 && nota2 < 0 && nota3 < 0 && nota4 < 0)
		{
			cout<<"alguna de las notas es menor a 0 por lo cual el promedio se puede visualizar"<< endl;
		}
		else
		{
			if(promedio >=96 && promedio <=100 )
			{
			cout<<"el estudiante "<< nombre<<" obtuvo una promedio de " <<promedio<<" por lo cual obtuvo una S(A++)"<<endl;
			}	
			else
			{
				if(promedio >=91 && promedio <=95 )
				{
					cout<<"el estudiante "<< nombre<<" obtuvo una promedio de " <<promedio<<" por lo cual obtuvo una A+"<<endl;
				}
				else
				{
					if(promedio >=86 && promedio <=90)
					{
						cout<<"el estudiante "<< nombre<<" obtuvo una promedio de " <<promedio<<" por lo cual obtuvo una A"<<endl;
					}
					else
					{
						if(promedio >=81 && promedio <=85)
						{
							cout<<"el estudiante "<< nombre<<" obtuvo una promedio de " <<promedio<<" por lo cual obtuvo una A-"<<endl;
						}
						else
						{
							if(promedio >=76 && promedio <=80 )
							{
								cout<<"el estudiante "<< nombre<<" obtuvo una promedio de " <<promedio<<" por lo cual obtuvo una B+"<<endl;
							}
							else
							{
								if(promedio >=71 && promedio <=75 )
								{
									cout<<"el estudiante "<< nombre<<" obtuvo una promedio de " <<promedio<<" por lo cual obtuvo una B"<<endl;
								}
								else
								{
									if(promedio >=66 && promedio <=70 )
									{
										cout<<"el estudiante "<< nombre<<" obtuvo una promedio de " <<promedio<<" por lo cual obtuvo una B-"<<endl;
									}
									else
									{
										if(promedio >=61 && promedio <=65 )
										{
											cout<<"el estudiante "<< nombre<<" obtuvo una promedio de " <<promedio<<" por lo cual obtuvo una C+"<<endl;
										}
										else
										{
											if(promedio >=56 && promedio <=60 )
											{
												cout<<"el estudiante "<< nombre<<" obtuvo una promedio de " <<promedio<<" por lo cual obtuvo una C"<<endl;
											}
											else
											{
												if(promedio >=51 && promedio <=55 )
												{
													cout<<"el estudiante "<< nombre<<" obtuvo una promedio de " <<promedio<<" por lo cual obtuvo una C-"<<endl;
												}
												else
												{
													if(promedio >=46 && promedio <=50 )
													{
														cout<<"el estudiante "<< nombre<<" obtuvo una promedio de " <<promedio<<" por lo cual obtuvo una D+"<<endl;
													}
													else
													{
														if(promedio >=41 && promedio <=45 )
														{
															cout<<"el estudiante "<< nombre<<" obtuvo una promedio de " <<promedio<<" por lo cual obtuvo una D"<<endl;
														}
														else
														{
															if(promedio >=36 && promedio <=40 )
															{
																cout<<"el estudiante "<< nombre<<" obtuvo una promedio de " <<promedio<<" por lo cual obtuvo una D-"<<endl;
															}
															else
															{
																if(promedio >=31 && promedio <=35 )
																{
																	cout<<"el estudiante "<< nombre<<" obtuvo una promedio de " <<promedio<<" por lo cual obtuvo una E+"<<endl;
																}
																else
																{
																	if(promedio >=26 && promedio <=30 )
																	{
																		cout<<"el estudiante "<< nombre<<" obtuvo una promedio de " <<promedio<<" por lo cual obtuvo una E"<<endl;
																	}
																	else
																	{
																		if(promedio >=21 && promedio <=25 )
																		{
																			cout<<"el estudiante "<< nombre<<" obtuvo una promedio de " <<promedio<<" por lo cual obtuvo una E-"<<endl;
																		}
																		else
																		{
																			if(promedio >=16 && promedio <=20 )
																			{
																				cout<<"el estudiante "<< nombre<<" obtuvo una promedio de " <<promedio<<" por lo cual obtuvo una F+"<<endl;
																			}
																			else
																			{
																				if(promedio >=11 && promedio <=15 )
																				{
																					cout<<"el estudiante "<< nombre<<" obtuvo una promedio de " <<promedio<<" por lo cual obtuvo una F"<<endl;
																				}
																				else
																				{
																					if(promedio >=6 && promedio <=10 )
																					{
																						cout<<"el estudiante "<< nombre<<" obtuvo una promedio de " <<promedio<<" por lo cual obtuvo una F"<<endl;
																					}
																					else
																					{
																						if(promedio >=1 && promedio <=5 )
																						{
																							cout<<"el estudiante "<< nombre<<" obtuvo una promedio de " <<promedio<<" por lo cual obtuvo una F-"<<endl;
																						}
																						else
																						{
																							cout<<"el estudiante "<< nombre<<" obtuvo una promedio de " <<promedio<<" por lo cual obtuvo una F--"<<endl;
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	getch();
	return 0;
}
