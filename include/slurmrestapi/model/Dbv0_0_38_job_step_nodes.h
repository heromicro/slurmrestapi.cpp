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

/*
 * Dbv0_0_38_job_step_nodes.h
 *
 * Node details
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_job_step_nodes_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_job_step_nodes_H_


#include "slurmrestapi/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Node details
/// </summary>
class  Dbv0_0_38_job_step_nodes
    : public ModelBase
{
public:
    Dbv0_0_38_job_step_nodes();
    virtual ~Dbv0_0_38_job_step_nodes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Dbv0_0_38_job_step_nodes members

    /// <summary>
    /// Total number of nodes in step
    /// </summary>
    int32_t getCount() const;
    bool countIsSet() const;
    void unsetCount();

    void setCount(int32_t value);

    /// <summary>
    /// Nodes in step
    /// </summary>
    utility::string_t getRange() const;
    bool rangeIsSet() const;
    void unsetRange();

    void setRange(const utility::string_t& value);


protected:
    int32_t m_Count;
    bool m_CountIsSet;
    utility::string_t m_Range;
    bool m_RangeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_job_step_nodes_H_ */
