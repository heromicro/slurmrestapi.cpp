/**
 * Slurm REST API
 * API to access and control Slurm
 *
 * The version of the OpenAPI document: Slurm-24.05.5&openapi/dbv0.0.39&openapi/slurmctld&openapi/slurmdbd&openapi/v0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.10.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * V0_0_39_assoc_max_jobs_per.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_assoc_max_jobs_per_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_assoc_max_jobs_per_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_39_uint32_no_val.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_39_uint32_no_val;


/// <summary>
/// 
/// </summary>
class  V0_0_39_assoc_max_jobs_per
    : public ModelBase
{
public:
    V0_0_39_assoc_max_jobs_per();
    virtual ~V0_0_39_assoc_max_jobs_per();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_39_assoc_max_jobs_per members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_uint32_no_val> getCount() const;
    bool countIsSet() const;
    void unsetCount();

    void setCount(const std::shared_ptr<V0_0_39_uint32_no_val>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_uint32_no_val> getAccruing() const;
    bool accruingIsSet() const;
    void unsetAccruing();

    void setAccruing(const std::shared_ptr<V0_0_39_uint32_no_val>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_uint32_no_val> getSubmitted() const;
    bool submittedIsSet() const;
    void unsetSubmitted();

    void setSubmitted(const std::shared_ptr<V0_0_39_uint32_no_val>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_uint32_no_val> getWallClock() const;
    bool wallClockIsSet() const;
    void unsetWall_clock();

    void setWallClock(const std::shared_ptr<V0_0_39_uint32_no_val>& value);


protected:
    std::shared_ptr<V0_0_39_uint32_no_val> m_Count;
    bool m_CountIsSet;
    std::shared_ptr<V0_0_39_uint32_no_val> m_Accruing;
    bool m_AccruingIsSet;
    std::shared_ptr<V0_0_39_uint32_no_val> m_Submitted;
    bool m_SubmittedIsSet;
    std::shared_ptr<V0_0_39_uint32_no_val> m_Wall_clock;
    bool m_Wall_clockIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_assoc_max_jobs_per_H_ */
