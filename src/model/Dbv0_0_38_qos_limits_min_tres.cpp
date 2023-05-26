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



#include "slurmrestapi/model/Dbv0_0_38_qos_limits_min_tres.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Dbv0_0_38_qos_limits_min_tres::Dbv0_0_38_qos_limits_min_tres()
{
    m_PerIsSet = false;
}

Dbv0_0_38_qos_limits_min_tres::~Dbv0_0_38_qos_limits_min_tres()
{
}

void Dbv0_0_38_qos_limits_min_tres::validate()
{
    // TODO: implement validation
}

web::json::value Dbv0_0_38_qos_limits_min_tres::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PerIsSet)
    {
        val[utility::conversions::to_string_t(U("per"))] = ModelBase::toJson(m_Per);
    }

    return val;
}

bool Dbv0_0_38_qos_limits_min_tres::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("per"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("per")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Dbv0_0_38_qos_limits_min_tres_per> refVal_setPer;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPer);
            setPer(refVal_setPer);
        }
    }
    return ok;
}

void Dbv0_0_38_qos_limits_min_tres::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
}

bool Dbv0_0_38_qos_limits_min_tres::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("per"))))
    {
        std::shared_ptr<Dbv0_0_38_qos_limits_min_tres_per> refVal_setPer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("per"))), refVal_setPer );
        setPer(refVal_setPer);
    }
    return ok;
}

std::shared_ptr<Dbv0_0_38_qos_limits_min_tres_per> Dbv0_0_38_qos_limits_min_tres::getPer() const
{
    return m_Per;
}

void Dbv0_0_38_qos_limits_min_tres::setPer(const std::shared_ptr<Dbv0_0_38_qos_limits_min_tres_per>& value)
{
    m_Per = value;
    m_PerIsSet = true;
}

bool Dbv0_0_38_qos_limits_min_tres::perIsSet() const
{
    return m_PerIsSet;
}

void Dbv0_0_38_qos_limits_min_tres::unsetPer()
{
    m_PerIsSet = false;
}
}
}
}
}


