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



#include "slurmrestapi/model/V0_0_39_step_nodes.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_39_step_nodes::V0_0_39_step_nodes()
{
    m_ListIsSet = false;
}

V0_0_39_step_nodes::~V0_0_39_step_nodes()
{
}

void V0_0_39_step_nodes::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_39_step_nodes::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ListIsSet)
    {
        val[utility::conversions::to_string_t(U("list"))] = ModelBase::toJson(m_List);
    }

    return val;
}

bool V0_0_39_step_nodes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("list"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("list")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setList;
            ok &= ModelBase::fromJson(fieldValue, refVal_setList);
            setList(refVal_setList);
        }
    }
    return ok;
}

void V0_0_39_step_nodes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ListIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("list")), m_List));
    }
}

bool V0_0_39_step_nodes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("list"))))
    {
        std::vector<utility::string_t> refVal_setList;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("list"))), refVal_setList );
        setList(refVal_setList);
    }
    return ok;
}

std::vector<utility::string_t>& V0_0_39_step_nodes::getList()
{
    return m_List;
}

void V0_0_39_step_nodes::setList(const std::vector<utility::string_t>& value)
{
    m_List = value;
    m_ListIsSet = true;
}

bool V0_0_39_step_nodes::listIsSet() const
{
    return m_ListIsSet;
}

void V0_0_39_step_nodes::unsetList()
{
    m_ListIsSet = false;
}
}
}
}
}

