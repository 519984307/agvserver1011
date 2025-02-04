#include "mappoint.h"

MapPoint::MapPoint(int _id, std::string _name, Map_Point_Type _type, int _x, int _y, int _realX, int _realY, int _realA, int _labelXoffset, int _labelYoffset, bool _mapChange, bool _locked, std::string _ip, int _port, int _agvType, std::string _lineId):
    mapElement(_id,_name,Map_Element_Type_Point),
    x(_x),
    y(_y),
    labelXoffset(_labelXoffset),
    labelYoffset(_labelYoffset),
    mapChange(_mapChange),
    locked(_locked),
    realX(_realX),
    realY(_realY),
    realA(_realA),
    point_type(_type),
    ip(_ip),
    port(_port),
    agvType(_agvType),
    lineId(_lineId)
{
}

MapPoint::~MapPoint()
{
}


mapElement *MapPoint::clone()
{
    MapPoint *p = new MapPoint(this->getId(),this->getName(),this->getPointType(),this->getX(),this->getY(),this->getRealX(),this->getRealY(),this->getRealA(),this->getLabelXoffset(),this->getLabelYoffset(),this->getMapChange(),this->getLocked(), this->getIp(),this->getPort(), this->getAgvType(),this->getLineId());
    return p;
}
