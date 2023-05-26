/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.37
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/Dbv0_0_37_association_max_tres_minutes.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Dbv0_0_37_association_max_tres_minutes::Dbv0_0_37_association_max_tres_minutes()
{
    m_PerIsSet = false;
    m_TotalIsSet = false;
}

Dbv0_0_37_association_max_tres_minutes::~Dbv0_0_37_association_max_tres_minutes()
{
}

void Dbv0_0_37_association_max_tres_minutes::validate()
{
    // TODO: implement validation
}

web::json::value Dbv0_0_37_association_max_tres_minutes::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PerIsSet)
    {
        val[utility::conversions::to_string_t(U("per"))] = ModelBase::toJson(m_Per);
    }
    if(m_TotalIsSet)
    {
        val[utility::conversions::to_string_t(U("total"))] = ModelBase::toJson(m_Total);
    }

    return val;
}

bool Dbv0_0_37_association_max_tres_minutes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("per"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("per")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Dbv0_0_37_association_max_tres_minutes_per> refVal_setPer;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPer);
            setPer(refVal_setPer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("total"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("total")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Dbv0_0_37_tres_list_inner>> refVal_setTotal;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTotal);
            setTotal(refVal_setTotal);
        }
    }
    return ok;
}

void Dbv0_0_37_association_max_tres_minutes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_PerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("per")), m_Per));
    }
    if(m_TotalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("total")), m_Total));
    }
}

bool Dbv0_0_37_association_max_tres_minutes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("per"))))
    {
        std::shared_ptr<Dbv0_0_37_association_max_tres_minutes_per> refVal_setPer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("per"))), refVal_setPer );
        setPer(refVal_setPer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("total"))))
    {
        std::vector<std::shared_ptr<Dbv0_0_37_tres_list_inner>> refVal_setTotal;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("total"))), refVal_setTotal );
        setTotal(refVal_setTotal);
    }
    return ok;
}

std::shared_ptr<Dbv0_0_37_association_max_tres_minutes_per> Dbv0_0_37_association_max_tres_minutes::getPer() const
{
    return m_Per;
}

void Dbv0_0_37_association_max_tres_minutes::setPer(const std::shared_ptr<Dbv0_0_37_association_max_tres_minutes_per>& value)
{
    m_Per = value;
    m_PerIsSet = true;
}

bool Dbv0_0_37_association_max_tres_minutes::perIsSet() const
{
    return m_PerIsSet;
}

void Dbv0_0_37_association_max_tres_minutes::unsetPer()
{
    m_PerIsSet = false;
}
std::vector<std::shared_ptr<Dbv0_0_37_tres_list_inner>>& Dbv0_0_37_association_max_tres_minutes::getTotal()
{
    return m_Total;
}

void Dbv0_0_37_association_max_tres_minutes::setTotal(const std::vector<std::shared_ptr<Dbv0_0_37_tres_list_inner>>& value)
{
    m_Total = value;
    m_TotalIsSet = true;
}

bool Dbv0_0_37_association_max_tres_minutes::totalIsSet() const
{
    return m_TotalIsSet;
}

void Dbv0_0_37_association_max_tres_minutes::unsetTotal()
{
    m_TotalIsSet = false;
}
}
}
}
}


