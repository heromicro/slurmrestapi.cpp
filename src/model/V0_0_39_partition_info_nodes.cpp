/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/V0_0_39_partition_info_nodes.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_39_partition_info_nodes::V0_0_39_partition_info_nodes()
{
    m_Total = 0;
    m_TotalIsSet = false;
}

V0_0_39_partition_info_nodes::~V0_0_39_partition_info_nodes()
{
}

void V0_0_39_partition_info_nodes::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_39_partition_info_nodes::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TotalIsSet)
    {
        val[utility::conversions::to_string_t(U("total"))] = ModelBase::toJson(m_Total);
    }

    return val;
}

bool V0_0_39_partition_info_nodes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("total"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("total")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setTotal;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTotal);
            setTotal(refVal_setTotal);
        }
    }
    return ok;
}

void V0_0_39_partition_info_nodes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_TotalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("total")), m_Total));
    }
}

bool V0_0_39_partition_info_nodes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("total"))))
    {
        int32_t refVal_setTotal;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("total"))), refVal_setTotal );
        setTotal(refVal_setTotal);
    }
    return ok;
}

int32_t V0_0_39_partition_info_nodes::getTotal() const
{
    return m_Total;
}

void V0_0_39_partition_info_nodes::setTotal(int32_t value)
{
    m_Total = value;
    m_TotalIsSet = true;
}

bool V0_0_39_partition_info_nodes::totalIsSet() const
{
    return m_TotalIsSet;
}

void V0_0_39_partition_info_nodes::unsetTotal()
{
    m_TotalIsSet = false;
}
}
}
}
}


