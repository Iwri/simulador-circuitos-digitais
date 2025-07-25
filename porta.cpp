#include "porta.h"
#include <stdexcept>

///
/// AS PORTAS
///

/// Porta NOT
std::string PortaNOT::getName() const {
    return "NT";
}
ptr_Porta PortaNOT::clone() const {
    return new PortaNOT(*this);
}
void PortaNOT::simular(const std::vector<bool3S>& in_port){
    if(in_port.size() != 1){
        throw std::invalid_argument("Porta NOT deve receber 1 entrada.");
    }
    setOutput(~in_port.at(0));
}

/// Porta AND
// Implementação do construtor
PortaAND::PortaAND(int NI): Porta(NI){
    if(NI < 2){
        throw std::invalid_argument("Porta AND deve ter no minimo 2 entradas.");
    }
}
//Sigla da porta
std::string PortaAND::getName() const{
    return "AN";
}
//Nova copia da porta atual
ptr_Porta PortaAND::clone() const {
    return new PortaAND(*this);
}
//Simulação do comportamento da porta
void PortaAND::simular(const std::vector<bool3S>& in_port){
    if(in_port.size() != static_cast<size_t>(getNumInputs())){
        throw std::invalid_argument("Numero de entradas incompativel com a Porta AND.");
    }
    bool3S resultado = bool3S::TRUE;
    for(size_t i = 0; i < in_port.size(); ++i){
        resultado &= in_port.at(i);
    }
    setOutput(resultado);
}

/// Porta NAND
PortaNAND::PortaNAND(int NI): Porta(NI){
    if(NI < 2){
        throw std::invalid_argument("Porta NAND deve ter no minimo 2 entradas.");
    }
}
//Sigla da porta
std::string PortaNAND::getName() const{
    return "NA";
}
//Nova copia da porta atual
ptr_Porta PortaNAND::clone() const{
    return new PortaNAND(*this);
}
//Simulação do comportamento da porta
void PortaNAND::simular(const std::vector<bool3S> &in_port){
    if(in_port.size() != static_cast<size_t>(getNumInputs())){
        throw std::invalid_argument("Numero de entradas incompativel com a Porta NAND.");
    }
    bool3S resultado_and = bool3S::TRUE;
    for(size_t i = 0; i < in_port.size(); ++i){
        resultado_and &= in_port.at(i);
    }
    setOutput(~resultado_and);
}

/// Porta OR
//Implementação do construtor
PortaOR::PortaOR(int NI): Porta(NI)
{
    if (NI < 2)
    {
        throw std::invalid_argument("Porta OR deve ter no minimo 2 entradas.");
    }
}
//Sigla da porta
std::string PortaOR::getName() const
{
    return "OR";
}
//Nova cópia da porta atual
ptr_Porta PortaOR::clone() const
{
    return new PortaOR(*this);
}
// Simulação do comportamento da porta
void PortaOR::simular(const std::vector<bool3S>& in_port)
{
    if (in_port.size() != static_cast<size_t>(getNumInputs()))
    {
        throw std::invalid_argument("Numero de entradas incompativel com a Porta OR.");
    }
    bool3S resultado = bool3S::FALSE;
    for (size_t i = 0; i < in_port.size(); ++i)
    {
        resultado |= in_port.at(i);
    }
    setOutput(resultado);
}

/// Porta NOR
//Implementação do construtor
PortaNOR::PortaNOR(int NI): Porta(NI)
{
    if (NI < 2)
    {
        throw std::invalid_argument("Porta NOR deve ter no minimo 2 entradas.");
    }
}
//Sigla da porta
std::string PortaNOR::getName() const
{
    return "NO";
}
//Nova cópia da porta atual
ptr_Porta PortaNOR::clone() const
{
    return new PortaNOR(*this);
}
//Simulação do comportamento da porta NOR
void PortaNOR::simular(const std::vector<bool3S>& in_port)
{
    if (in_port.size() != static_cast<size_t>(getNumInputs()))
    {
        throw std::invalid_argument("Numero de entradas incompativel com a Porta NOR.");
    }
    bool3S resultado_or = bool3S::FALSE;
    for (size_t i = 0; i < in_port.size(); ++i)
    {
        resultado_or |= in_port.at(i);
    }
    setOutput(~resultado_or);
}

/// Porta XOR
//Implementação do construtor
PortaXOR::PortaXOR(int NI): Porta(NI)
{
    if (NI < 2)
    {
        throw std::invalid_argument("Porta XOR deve ter no minimo 2 entradas.");
    }
}
//Sigla da porta
std::string PortaXOR::getName() const
{
    return "XO";
}
//Nova cópia da porta atual
ptr_Porta PortaXOR::clone() const
{
    return new PortaXOR(*this);
}
//Simulação do comportamento da porta XOR
void PortaXOR::simular(const std::vector<bool3S>& in_port)
{
    if (in_port.size() != static_cast<size_t>(getNumInputs()))
    {
        throw std::invalid_argument("Numero de entradas incompativel com a Porta XOR.");
    }
    bool3S resultado = bool3S::FALSE;
    for (size_t i = 0; i < in_port.size(); ++i)
    {
        resultado ^= in_port.at(i);
    }
    setOutput(resultado);
}

/// Porta NXOR
//Implementação do construtor
PortaNXOR::PortaNXOR(int NI): Porta(NI)
{
    if (NI < 2)
    {
        throw std::invalid_argument("Porta NXOR deve ter no minimo 2 entradas.");
    }
}
//Sigla da porta
std::string PortaNXOR::getName() const
{
    return "NX";
}
//Nova cópia da porta atual
ptr_Porta PortaNXOR::clone() const
{
    return new PortaNXOR(*this);
}
//Simulação do comportamento da porta NXOR
void PortaNXOR::simular(const std::vector<bool3S>& in_port)
{
    if (in_port.size() != static_cast<size_t>(getNumInputs()))
    {
        throw std::invalid_argument("Numero de entradas incompativel com a Porta NXOR.");
    }
    bool3S resultado_xor = bool3S::FALSE;
    for (size_t i = 0; i < in_port.size(); ++i)
    {
        resultado_xor ^= in_port.at(i);
    }
    setOutput(~resultado_xor);
}
