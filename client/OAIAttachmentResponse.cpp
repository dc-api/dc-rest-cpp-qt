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

#include "OAIAttachmentResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIAttachmentResponse::OAIAttachmentResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAttachmentResponse::OAIAttachmentResponse() {
    this->initializeModel();
}

OAIAttachmentResponse::~OAIAttachmentResponse() {}

void OAIAttachmentResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_filename_isSet = false;
    m_filename_isValid = false;

    m_size_isSet = false;
    m_size_isValid = false;

    m_url_isSet = false;
    m_url_isValid = false;

    m_proxy_url_isSet = false;
    m_proxy_url_isValid = false;

    m_width_isSet = false;
    m_width_isValid = false;

    m_height_isSet = false;
    m_height_isValid = false;

    m_duration_secs_isSet = false;
    m_duration_secs_isValid = false;

    m_waveform_isSet = false;
    m_waveform_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_content_type_isSet = false;
    m_content_type_isValid = false;

    m_ephemeral_isSet = false;
    m_ephemeral_isValid = false;

    m_title_isSet = false;
    m_title_isValid = false;

    m_application_isSet = false;
    m_application_isValid = false;

    m_clip_created_at_isSet = false;
    m_clip_created_at_isValid = false;

    m_clip_participants_isSet = false;
    m_clip_participants_isValid = false;
}

void OAIAttachmentResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAttachmentResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_filename_isValid = ::dc_rest::fromJsonValue(m_filename, json[QString("filename")]);
    m_filename_isSet = !json[QString("filename")].isNull() && m_filename_isValid;

    m_size_isValid = ::dc_rest::fromJsonValue(m_size, json[QString("size")]);
    m_size_isSet = !json[QString("size")].isNull() && m_size_isValid;

    m_url_isValid = ::dc_rest::fromJsonValue(m_url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_proxy_url_isValid = ::dc_rest::fromJsonValue(m_proxy_url, json[QString("proxy_url")]);
    m_proxy_url_isSet = !json[QString("proxy_url")].isNull() && m_proxy_url_isValid;

    m_width_isValid = ::dc_rest::fromJsonValue(m_width, json[QString("width")]);
    m_width_isSet = !json[QString("width")].isNull() && m_width_isValid;

    m_height_isValid = ::dc_rest::fromJsonValue(m_height, json[QString("height")]);
    m_height_isSet = !json[QString("height")].isNull() && m_height_isValid;

    m_duration_secs_isValid = ::dc_rest::fromJsonValue(m_duration_secs, json[QString("duration_secs")]);
    m_duration_secs_isSet = !json[QString("duration_secs")].isNull() && m_duration_secs_isValid;

    m_waveform_isValid = ::dc_rest::fromJsonValue(m_waveform, json[QString("waveform")]);
    m_waveform_isSet = !json[QString("waveform")].isNull() && m_waveform_isValid;

    m_description_isValid = ::dc_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_content_type_isValid = ::dc_rest::fromJsonValue(m_content_type, json[QString("content_type")]);
    m_content_type_isSet = !json[QString("content_type")].isNull() && m_content_type_isValid;

    m_ephemeral_isValid = ::dc_rest::fromJsonValue(m_ephemeral, json[QString("ephemeral")]);
    m_ephemeral_isSet = !json[QString("ephemeral")].isNull() && m_ephemeral_isValid;

    m_title_isValid = ::dc_rest::fromJsonValue(m_title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_application_isValid = ::dc_rest::fromJsonValue(m_application, json[QString("application")]);
    m_application_isSet = !json[QString("application")].isNull() && m_application_isValid;

    m_clip_created_at_isValid = ::dc_rest::fromJsonValue(m_clip_created_at, json[QString("clip_created_at")]);
    m_clip_created_at_isSet = !json[QString("clip_created_at")].isNull() && m_clip_created_at_isValid;

    m_clip_participants_isValid = ::dc_rest::fromJsonValue(m_clip_participants, json[QString("clip_participants")]);
    m_clip_participants_isSet = !json[QString("clip_participants")].isNull() && m_clip_participants_isValid;
}

QString OAIAttachmentResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAttachmentResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_filename_isSet) {
        obj.insert(QString("filename"), ::dc_rest::toJsonValue(m_filename));
    }
    if (m_size_isSet) {
        obj.insert(QString("size"), ::dc_rest::toJsonValue(m_size));
    }
    if (m_url_isSet) {
        obj.insert(QString("url"), ::dc_rest::toJsonValue(m_url));
    }
    if (m_proxy_url_isSet) {
        obj.insert(QString("proxy_url"), ::dc_rest::toJsonValue(m_proxy_url));
    }
    if (m_width_isSet) {
        obj.insert(QString("width"), ::dc_rest::toJsonValue(m_width));
    }
    if (m_height_isSet) {
        obj.insert(QString("height"), ::dc_rest::toJsonValue(m_height));
    }
    if (m_duration_secs_isSet) {
        obj.insert(QString("duration_secs"), ::dc_rest::toJsonValue(m_duration_secs));
    }
    if (m_waveform_isSet) {
        obj.insert(QString("waveform"), ::dc_rest::toJsonValue(m_waveform));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::dc_rest::toJsonValue(m_description));
    }
    if (m_content_type_isSet) {
        obj.insert(QString("content_type"), ::dc_rest::toJsonValue(m_content_type));
    }
    if (m_ephemeral_isSet) {
        obj.insert(QString("ephemeral"), ::dc_rest::toJsonValue(m_ephemeral));
    }
    if (m_title_isSet) {
        obj.insert(QString("title"), ::dc_rest::toJsonValue(m_title));
    }
    if (m_application.isSet()) {
        obj.insert(QString("application"), ::dc_rest::toJsonValue(m_application));
    }
    if (m_clip_created_at_isSet) {
        obj.insert(QString("clip_created_at"), ::dc_rest::toJsonValue(m_clip_created_at));
    }
    if (m_clip_participants.size() > 0) {
        obj.insert(QString("clip_participants"), ::dc_rest::toJsonValue(m_clip_participants));
    }
    return obj;
}

QString OAIAttachmentResponse::getId() const {
    return m_id;
}
void OAIAttachmentResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIAttachmentResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIAttachmentResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIAttachmentResponse::getFilename() const {
    return m_filename;
}
void OAIAttachmentResponse::setFilename(const QString &filename) {
    m_filename = filename;
    m_filename_isSet = true;
}

bool OAIAttachmentResponse::is_filename_Set() const{
    return m_filename_isSet;
}

bool OAIAttachmentResponse::is_filename_Valid() const{
    return m_filename_isValid;
}

qint32 OAIAttachmentResponse::getSize() const {
    return m_size;
}
void OAIAttachmentResponse::setSize(const qint32 &size) {
    m_size = size;
    m_size_isSet = true;
}

bool OAIAttachmentResponse::is_size_Set() const{
    return m_size_isSet;
}

bool OAIAttachmentResponse::is_size_Valid() const{
    return m_size_isValid;
}

QString OAIAttachmentResponse::getUrl() const {
    return m_url;
}
void OAIAttachmentResponse::setUrl(const QString &url) {
    m_url = url;
    m_url_isSet = true;
}

bool OAIAttachmentResponse::is_url_Set() const{
    return m_url_isSet;
}

bool OAIAttachmentResponse::is_url_Valid() const{
    return m_url_isValid;
}

QString OAIAttachmentResponse::getProxyUrl() const {
    return m_proxy_url;
}
void OAIAttachmentResponse::setProxyUrl(const QString &proxy_url) {
    m_proxy_url = proxy_url;
    m_proxy_url_isSet = true;
}

bool OAIAttachmentResponse::is_proxy_url_Set() const{
    return m_proxy_url_isSet;
}

bool OAIAttachmentResponse::is_proxy_url_Valid() const{
    return m_proxy_url_isValid;
}

qint32 OAIAttachmentResponse::getWidth() const {
    return m_width;
}
void OAIAttachmentResponse::setWidth(const qint32 &width) {
    m_width = width;
    m_width_isSet = true;
}

bool OAIAttachmentResponse::is_width_Set() const{
    return m_width_isSet;
}

bool OAIAttachmentResponse::is_width_Valid() const{
    return m_width_isValid;
}

qint32 OAIAttachmentResponse::getHeight() const {
    return m_height;
}
void OAIAttachmentResponse::setHeight(const qint32 &height) {
    m_height = height;
    m_height_isSet = true;
}

bool OAIAttachmentResponse::is_height_Set() const{
    return m_height_isSet;
}

bool OAIAttachmentResponse::is_height_Valid() const{
    return m_height_isValid;
}

double OAIAttachmentResponse::getDurationSecs() const {
    return m_duration_secs;
}
void OAIAttachmentResponse::setDurationSecs(const double &duration_secs) {
    m_duration_secs = duration_secs;
    m_duration_secs_isSet = true;
}

bool OAIAttachmentResponse::is_duration_secs_Set() const{
    return m_duration_secs_isSet;
}

bool OAIAttachmentResponse::is_duration_secs_Valid() const{
    return m_duration_secs_isValid;
}

QString OAIAttachmentResponse::getWaveform() const {
    return m_waveform;
}
void OAIAttachmentResponse::setWaveform(const QString &waveform) {
    m_waveform = waveform;
    m_waveform_isSet = true;
}

bool OAIAttachmentResponse::is_waveform_Set() const{
    return m_waveform_isSet;
}

bool OAIAttachmentResponse::is_waveform_Valid() const{
    return m_waveform_isValid;
}

QString OAIAttachmentResponse::getDescription() const {
    return m_description;
}
void OAIAttachmentResponse::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIAttachmentResponse::is_description_Set() const{
    return m_description_isSet;
}

bool OAIAttachmentResponse::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIAttachmentResponse::getContentType() const {
    return m_content_type;
}
void OAIAttachmentResponse::setContentType(const QString &content_type) {
    m_content_type = content_type;
    m_content_type_isSet = true;
}

bool OAIAttachmentResponse::is_content_type_Set() const{
    return m_content_type_isSet;
}

bool OAIAttachmentResponse::is_content_type_Valid() const{
    return m_content_type_isValid;
}

bool OAIAttachmentResponse::isEphemeral() const {
    return m_ephemeral;
}
void OAIAttachmentResponse::setEphemeral(const bool &ephemeral) {
    m_ephemeral = ephemeral;
    m_ephemeral_isSet = true;
}

bool OAIAttachmentResponse::is_ephemeral_Set() const{
    return m_ephemeral_isSet;
}

bool OAIAttachmentResponse::is_ephemeral_Valid() const{
    return m_ephemeral_isValid;
}

QString OAIAttachmentResponse::getTitle() const {
    return m_title;
}
void OAIAttachmentResponse::setTitle(const QString &title) {
    m_title = title;
    m_title_isSet = true;
}

bool OAIAttachmentResponse::is_title_Set() const{
    return m_title_isSet;
}

bool OAIAttachmentResponse::is_title_Valid() const{
    return m_title_isValid;
}

OAIApplicationResponse OAIAttachmentResponse::getApplication() const {
    return m_application;
}
void OAIAttachmentResponse::setApplication(const OAIApplicationResponse &application) {
    m_application = application;
    m_application_isSet = true;
}

bool OAIAttachmentResponse::is_application_Set() const{
    return m_application_isSet;
}

bool OAIAttachmentResponse::is_application_Valid() const{
    return m_application_isValid;
}

QDateTime OAIAttachmentResponse::getClipCreatedAt() const {
    return m_clip_created_at;
}
void OAIAttachmentResponse::setClipCreatedAt(const QDateTime &clip_created_at) {
    m_clip_created_at = clip_created_at;
    m_clip_created_at_isSet = true;
}

bool OAIAttachmentResponse::is_clip_created_at_Set() const{
    return m_clip_created_at_isSet;
}

bool OAIAttachmentResponse::is_clip_created_at_Valid() const{
    return m_clip_created_at_isValid;
}

QList<OAIUserResponse> OAIAttachmentResponse::getClipParticipants() const {
    return m_clip_participants;
}
void OAIAttachmentResponse::setClipParticipants(const QList<OAIUserResponse> &clip_participants) {
    m_clip_participants = clip_participants;
    m_clip_participants_isSet = true;
}

bool OAIAttachmentResponse::is_clip_participants_Set() const{
    return m_clip_participants_isSet;
}

bool OAIAttachmentResponse::is_clip_participants_Valid() const{
    return m_clip_participants_isValid;
}

bool OAIAttachmentResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_filename_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_size_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_proxy_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_width_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_height_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_duration_secs_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_waveform_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_content_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_ephemeral_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_application.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_clip_created_at_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_clip_participants.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAttachmentResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_filename_isValid && m_size_isValid && m_url_isValid && m_proxy_url_isValid && true;
}

} // namespace dc_rest
