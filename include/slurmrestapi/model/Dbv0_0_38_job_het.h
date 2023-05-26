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
 * Dbv0_0_38_job_het.h
 *
 * Heterogeneous Job details (optional)
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_job_het_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_job_het_H_


#include "slurmrestapi/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Heterogeneous Job details (optional)
/// </summary>
class  Dbv0_0_38_job_het
    : public ModelBase
{
public:
    Dbv0_0_38_job_het();
    virtual ~Dbv0_0_38_job_het();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Dbv0_0_38_job_het members

    /// <summary>
    /// Parent HetJob id
    /// </summary>
    int32_t getJobId() const;
    bool jobIdIsSet() const;
    void unsetJob_id();

    void setJobId(int32_t value);

    /// <summary>
    /// Offset of this job to parent
    /// </summary>
    int32_t getJobOffset() const;
    bool jobOffsetIsSet() const;
    void unsetJob_offset();

    void setJobOffset(int32_t value);


protected:
    int32_t m_Job_id;
    bool m_Job_idIsSet;
    int32_t m_Job_offset;
    bool m_Job_offsetIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_job_het_H_ */