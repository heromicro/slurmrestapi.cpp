/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.38
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/Dbv0_0_38_association_max_tres.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Dbv0_0_38_association_max_tres::Dbv0_0_38_association_max_tres()
{
    m_PerIsSet = false;
    m_TotalIsSet = false;
    m_MinutesIsSet = false;
}

Dbv0_0_38_association_max_tres::~Dbv0_0_38_association_max_tres()
{
}

void Dbv0_0_38_association_max_tres::validate()
{
    // TODO: implement validation
}

web::json::value Dbv0_0_38_association_max_tres::toJson() const
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
    if(m_MinutesIsSet)
    {
        val[utility::conversions::to_string_t(U("minutes"))] = ModelBase::toJson(m_Minutes);
    }

    return val;
}

bool Dbv0_0_38_association_max_tres::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("per"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("per")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Dbv0_0_38_association_max_tres_per> refVal_setPer;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPer);
            setPer(refVal_setPer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("total"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("total")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Dbv0_0_38_tres_list_inner>> refVal_setTotal;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTotal);
            setTotal(refVal_setTotal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("minutes"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("minutes")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Dbv0_0_38_association_max_tres_minutes> refVal_setMinutes;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMinutes);
            setMinutes(refVal_setMinutes);
        }
    }
    return ok;
}

void Dbv0_0_38_association_max_tres::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_MinutesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("minutes")), m_Minutes));
    }
}

bool Dbv0_0_38_association_max_tres::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("per"))))
    {
        std::shared_ptr<Dbv0_0_38_association_max_tres_per> refVal_setPer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("per"))), refVal_setPer );
        setPer(refVal_setPer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("total"))))
    {
        std::vector<std::shared_ptr<Dbv0_0_38_tres_list_inner>> refVal_setTotal;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("total"))), refVal_setTotal );
        setTotal(refVal_setTotal);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("minutes"))))
    {
        std::shared_ptr<Dbv0_0_38_association_max_tres_minutes> refVal_setMinutes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("minutes"))), refVal_setMinutes );
        setMinutes(refVal_setMinutes);
    }
    return ok;
}

std::shared_ptr<Dbv0_0_38_association_max_tres_per> Dbv0_0_38_association_max_tres::getPer() const
{
    return m_Per;
}

void Dbv0_0_38_association_max_tres::setPer(const std::shared_ptr<Dbv0_0_38_association_max_tres_per>& value)
{
    m_Per = value;
    m_PerIsSet = true;
}

bool Dbv0_0_38_association_max_tres::perIsSet() const
{
    return m_PerIsSet;
}

void Dbv0_0_38_association_max_tres::unsetPer()
{
    m_PerIsSet = false;
}
std::vector<std::shared_ptr<Dbv0_0_38_tres_list_inner>>& Dbv0_0_38_association_max_tres::getTotal()
{
    return m_Total;
}

void Dbv0_0_38_association_max_tres::setTotal(const std::vector<std::shared_ptr<Dbv0_0_38_tres_list_inner>>& value)
{
    m_Total = value;
    m_TotalIsSet = true;
}

bool Dbv0_0_38_association_max_tres::totalIsSet() const
{
    return m_TotalIsSet;
}

void Dbv0_0_38_association_max_tres::unsetTotal()
{
    m_TotalIsSet = false;
}
std::shared_ptr<Dbv0_0_38_association_max_tres_minutes> Dbv0_0_38_association_max_tres::getMinutes() const
{
    return m_Minutes;
}

void Dbv0_0_38_association_max_tres::setMinutes(const std::shared_ptr<Dbv0_0_38_association_max_tres_minutes>& value)
{
    m_Minutes = value;
    m_MinutesIsSet = true;
}

bool Dbv0_0_38_association_max_tres::minutesIsSet() const
{
    return m_MinutesIsSet;
}

void Dbv0_0_38_association_max_tres::unsetMinutes()
{
    m_MinutesIsSet = false;
}
}
}
}
}

