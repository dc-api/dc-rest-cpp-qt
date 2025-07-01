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

#include "OAIMessageAttachmentRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIMessageAttachmentRequest::OAIMessageAttachmentRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMessageAttachmentRequest::OAIMessageAttachmentRequest() {
    this->initializeModel();
}

OAIMessageAttachmentRequest::~OAIMessageAttachmentRequest() {}

void OAIMessageAttachmentRequest::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_filename_isSet = false;
    m_filename_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_duration_secs_isSet = false;
    m_duration_secs_isValid = false;

    m_waveform_isSet = false;
    m_waveform_isValid = false;

    m_title_isSet = false;
    m_title_isValid = false;

    m_is_remix_isSet = false;
    m_is_remix_isValid = false;
}

void OAIMessageAttachmentRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMessageAttachmentRequest::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_filename_isValid = ::dc_rest::fromJsonValue(m_filename, json[QString("filename")]);
    m_filename_isSet = !json[QString("filename")].isNull() && m_filename_isValid;

    m_description_isValid = ::dc_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_duration_secs_isValid = ::dc_rest::fromJsonValue(m_duration_secs, json[QString("duration_secs")]);
    m_duration_secs_isSet = !json[QString("duration_secs")].isNull() && m_duration_secs_isValid;

    m_waveform_isValid = ::dc_rest::fromJsonValue(m_waveform, json[QString("waveform")]);
    m_waveform_isSet = !json[QString("waveform")].isNull() && m_waveform_isValid;

    m_title_isValid = ::dc_rest::fromJsonValue(m_title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_is_remix_isValid = ::dc_rest::fromJsonValue(m_is_remix, json[QString("is_remix")]);
    m_is_remix_isSet = !json[QString("is_remix")].isNull() && m_is_remix_isValid;
}

QString OAIMessageAttachmentRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMessageAttachmentRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_filename_isSet) {
        obj.insert(QString("filename"), ::dc_rest::toJsonValue(m_filename));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::dc_rest::toJsonValue(m_description));
    }
    if (m_duration_secs_isSet) {
        obj.insert(QString("duration_secs"), ::dc_rest::toJsonValue(m_duration_secs));
    }
    if (m_waveform_isSet) {
        obj.insert(QString("waveform"), ::dc_rest::toJsonValue(m_waveform));
    }
    if (m_title_isSet) {
        obj.insert(QString("title"), ::dc_rest::toJsonValue(m_title));
    }
    if (m_is_remix_isSet) {
        obj.insert(QString("is_remix"), ::dc_rest::toJsonValue(m_is_remix));
    }
    return obj;
}

QString OAIMessageAttachmentRequest::getId() const {
    return m_id;
}
void OAIMessageAttachmentRequest::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIMessageAttachmentRequest::is_id_Set() const{
    return m_id_isSet;
}

bool OAIMessageAttachmentRequest::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIMessageAttachmentRequest::getFilename() const {
    return m_filename;
}
void OAIMessageAttachmentRequest::setFilename(const QString &filename) {
    m_filename = filename;
    m_filename_isSet = true;
}

bool OAIMessageAttachmentRequest::is_filename_Set() const{
    return m_filename_isSet;
}

bool OAIMessageAttachmentRequest::is_filename_Valid() const{
    return m_filename_isValid;
}

QString OAIMessageAttachmentRequest::getDescription() const {
    return m_description;
}
void OAIMessageAttachmentRequest::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIMessageAttachmentRequest::is_description_Set() const{
    return m_description_isSet;
}

bool OAIMessageAttachmentRequest::is_description_Valid() const{
    return m_description_isValid;
}

double OAIMessageAttachmentRequest::getDurationSecs() const {
    return m_duration_secs;
}
void OAIMessageAttachmentRequest::setDurationSecs(const double &duration_secs) {
    m_duration_secs = duration_secs;
    m_duration_secs_isSet = true;
}

bool OAIMessageAttachmentRequest::is_duration_secs_Set() const{
    return m_duration_secs_isSet;
}

bool OAIMessageAttachmentRequest::is_duration_secs_Valid() const{
    return m_duration_secs_isValid;
}

QString OAIMessageAttachmentRequest::getWaveform() const {
    return m_waveform;
}
void OAIMessageAttachmentRequest::setWaveform(const QString &waveform) {
    m_waveform = waveform;
    m_waveform_isSet = true;
}

bool OAIMessageAttachmentRequest::is_waveform_Set() const{
    return m_waveform_isSet;
}

bool OAIMessageAttachmentRequest::is_waveform_Valid() const{
    return m_waveform_isValid;
}

QString OAIMessageAttachmentRequest::getTitle() const {
    return m_title;
}
void OAIMessageAttachmentRequest::setTitle(const QString &title) {
    m_title = title;
    m_title_isSet = true;
}

bool OAIMessageAttachmentRequest::is_title_Set() const{
    return m_title_isSet;
}

bool OAIMessageAttachmentRequest::is_title_Valid() const{
    return m_title_isValid;
}

bool OAIMessageAttachmentRequest::isIsRemix() const {
    return m_is_remix;
}
void OAIMessageAttachmentRequest::setIsRemix(const bool &is_remix) {
    m_is_remix = is_remix;
    m_is_remix_isSet = true;
}

bool OAIMessageAttachmentRequest::is_is_remix_Set() const{
    return m_is_remix_isSet;
}

bool OAIMessageAttachmentRequest::is_is_remix_Valid() const{
    return m_is_remix_isValid;
}

bool OAIMessageAttachmentRequest::isSet() const {
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

        if (m_description_isSet) {
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

        if (m_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_remix_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMessageAttachmentRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && true;
}

} // namespace dc_rest
