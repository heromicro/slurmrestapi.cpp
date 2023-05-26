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

/*
 * Dbv0_0_37_association_max_jobs_per.h
 *
 * Max jobs per settings
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_37_association_max_jobs_per_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_37_association_max_jobs_per_H_


#include "slurmrestapi/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Max jobs per settings
/// </summary>
class  Dbv0_0_37_association_max_jobs_per
    : public ModelBase
{
public:
    Dbv0_0_37_association_max_jobs_per();
    virtual ~Dbv0_0_37_association_max_jobs_per();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Dbv0_0_37_association_max_jobs_per members

    /// <summary>
    /// Max wallclock per job
    /// </summary>
    int32_t getWallClock() const;
    bool wallClockIsSet() const;
    void unsetWall_clock();

    void setWallClock(int32_t value);


protected:
    int32_t m_Wall_clock;
    bool m_Wall_clockIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_37_association_max_jobs_per_H_ */