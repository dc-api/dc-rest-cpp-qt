/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/*
 * OAIAttachmentResponse.h
 *
 * 
 */

#ifndef OAIAttachmentResponse_H
#define OAIAttachmentResponse_H

#include <QJsonObject>

#include "OAIApplicationResponse.h"
#include "OAIUserResponse.h"
#include <QDateTime>
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIApplicationResponse;
class OAIUserResponse;

class OAIAttachmentResponse : public OAIObject {
public:
    OAIAttachmentResponse();
    OAIAttachmentResponse(QString json);
    ~OAIAttachmentResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getFilename() const;
    void setFilename(const QString &filename);
    bool is_filename_Set() const;
    bool is_filename_Valid() const;

    qint32 getSize() const;
    void setSize(const qint32 &size);
    bool is_size_Set() const;
    bool is_size_Valid() const;

    QString getUrl() const;
    void setUrl(const QString &url);
    bool is_url_Set() const;
    bool is_url_Valid() const;

    QString getProxyUrl() const;
    void setProxyUrl(const QString &proxy_url);
    bool is_proxy_url_Set() const;
    bool is_proxy_url_Valid() const;

    qint32 getWidth() const;
    void setWidth(const qint32 &width);
    bool is_width_Set() const;
    bool is_width_Valid() const;

    qint32 getHeight() const;
    void setHeight(const qint32 &height);
    bool is_height_Set() const;
    bool is_height_Valid() const;

    double getDurationSecs() const;
    void setDurationSecs(const double &duration_secs);
    bool is_duration_secs_Set() const;
    bool is_duration_secs_Valid() const;

    QString getWaveform() const;
    void setWaveform(const QString &waveform);
    bool is_waveform_Set() const;
    bool is_waveform_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getContentType() const;
    void setContentType(const QString &content_type);
    bool is_content_type_Set() const;
    bool is_content_type_Valid() const;

    bool isEphemeral() const;
    void setEphemeral(const bool &ephemeral);
    bool is_ephemeral_Set() const;
    bool is_ephemeral_Valid() const;

    QString getTitle() const;
    void setTitle(const QString &title);
    bool is_title_Set() const;
    bool is_title_Valid() const;

    OAIApplicationResponse getApplication() const;
    void setApplication(const OAIApplicationResponse &application);
    bool is_application_Set() const;
    bool is_application_Valid() const;

    QDateTime getClipCreatedAt() const;
    void setClipCreatedAt(const QDateTime &clip_created_at);
    bool is_clip_created_at_Set() const;
    bool is_clip_created_at_Valid() const;

    QList<OAIUserResponse> getClipParticipants() const;
    void setClipParticipants(const QList<OAIUserResponse> &clip_participants);
    bool is_clip_participants_Set() const;
    bool is_clip_participants_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_filename;
    bool m_filename_isSet;
    bool m_filename_isValid;

    qint32 m_size;
    bool m_size_isSet;
    bool m_size_isValid;

    QString m_url;
    bool m_url_isSet;
    bool m_url_isValid;

    QString m_proxy_url;
    bool m_proxy_url_isSet;
    bool m_proxy_url_isValid;

    qint32 m_width;
    bool m_width_isSet;
    bool m_width_isValid;

    qint32 m_height;
    bool m_height_isSet;
    bool m_height_isValid;

    double m_duration_secs;
    bool m_duration_secs_isSet;
    bool m_duration_secs_isValid;

    QString m_waveform;
    bool m_waveform_isSet;
    bool m_waveform_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    QString m_content_type;
    bool m_content_type_isSet;
    bool m_content_type_isValid;

    bool m_ephemeral;
    bool m_ephemeral_isSet;
    bool m_ephemeral_isValid;

    QString m_title;
    bool m_title_isSet;
    bool m_title_isValid;

    OAIApplicationResponse m_application;
    bool m_application_isSet;
    bool m_application_isValid;

    QDateTime m_clip_created_at;
    bool m_clip_created_at_isSet;
    bool m_clip_created_at_isValid;

    QList<OAIUserResponse> m_clip_participants;
    bool m_clip_participants_isSet;
    bool m_clip_participants_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIAttachmentResponse)

#endif // OAIAttachmentResponse_H
